from typing import AsyncGenerator

from fastapi import Depends
from fastapi_users.db import (
    SQLAlchemyBaseOAuthAccountTable,
    SQLAlchemyBaseUserTable,
    SQLAlchemyUserDatabase,
)
from sqlalchemy import Column, String
from sqlalchemy.ext.asyncio import AsyncSession, create_async_engine
from sqlalchemy.ext.declarative import DeclarativeMeta, declarative_base
from sqlalchemy.orm import relationship, sessionmaker

from app.models import UserDB
from app.settings import settings

Base: DeclarativeMeta = declarative_base()


class UserTable(Base, SQLAlchemyBaseUserTable):
    email = Column(String(length=320), unique=True, index=True, nullable=True)
    username = Column(String(length=24), unique=True, nullable=True)
    oauth_accounts = relationship("OAuthAccountTable")


class OAuthAccountTable(SQLAlchemyBaseOAuthAccountTable, Base):
    account_email = Column(String(length=320), nullable=True)


engine = create_async_engine(settings.DB_URI)
async_session_maker = sessionmaker(engine, class_=AsyncSession, expire_on_commit=False)


async def create_db_and_tables():
    async with engine.begin() as conn:
        await conn.run_sync(Base.metadata.create_all)


async def get_async_session() -> AsyncGenerator[AsyncSession, None]:
    async with async_session_maker() as session:
        yield session


async def get_user_db(session: AsyncSession = Depends(get_async_session)):
    yield SQLAlchemyUserDatabase(UserDB, session, UserTable, OAuthAccountTable)
