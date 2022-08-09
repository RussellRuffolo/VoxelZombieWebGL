from typing import Optional

from fastapi_users import models


class User(models.BaseUser, models.BaseOAuthAccountMixin):
    username: Optional[str]



class UserCreate(models.BaseUserCreate):
    username: Optional[str]



class UserUpdate(models.BaseUserUpdate):
    username: Optional[str]
  


class UserDB(User, models.BaseUserDB):
    pass

