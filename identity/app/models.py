from typing import Optional

from fastapi_users import models
from pydantic import EmailStr

class User(models.BaseUser, models.BaseOAuthAccountMixin):
    username: Optional[str]
    email: Optional[EmailStr] = None


class UserCreate(models.BaseUserCreate):
    username: Optional[str]
    email: Optional[EmailStr] = None


class UserUpdate(models.BaseUserUpdate):
    username: Optional[str]
    email: Optional[EmailStr] = None


class UserDB(User, models.BaseUserDB):
    email: Optional[EmailStr] = None

