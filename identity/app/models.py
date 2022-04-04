from typing import Optional
from pydantic import constr

from fastapi_users import models


class User(models.BaseUser, models.BaseOAuthAccountMixin):
    username: str


class UserCreate(models.BaseUserCreate):
    pass


class UserUpdate(models.BaseUserUpdate):
    username: Optional[constr(max_length=24)]


class UserDB(User, models.BaseUserDB):
    pass
