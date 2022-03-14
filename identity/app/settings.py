import secrets
from typing import List, Union, Optional

from pydantic import AnyHttpUrl, BaseSettings, EmailStr, HttpUrl, validator


class _Settings(BaseSettings):
    # Settings are set automatically using environment variables
    SERVER_NAME: str
    SECRET_KEY: str = str(secrets.randbits(32))
    SERVER_HOST: AnyHttpUrl
    BACKEND_CORS_ORIGINS: List[AnyHttpUrl]

    @validator("BACKEND_CORS_ORIGINS", pre=True)
    def assemble_cors_origins(cls, v: Union[str, List[str]]) -> Union[List[str], str]:
        if isinstance(v, str) and not v.startswith("["):
            return [i.strip() for i in v.split(",")]
        elif isinstance(v, (list, str)):
            return v
        raise ValueError(v)

    # PROJECT_NAME: str

    GOOGLE_OAUTH_CLIENT_ID: str
    GOOGLE_OAUTH_CLIENT_SECRET: str
    #
    # DB_SERVER: str
    # DB_USER: str
    # DB_PASSWORD: str
    # SQLALCHEMY_DB_URI: Optional[str] = None
    DB_URI: str

    class Config:
        case_sensitive = True


settings = _Settings()
