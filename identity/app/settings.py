import secrets
from typing import List, Union, Optional

from pydantic import AnyHttpUrl, BaseSettings, EmailStr, HttpUrl, validator


class _Settings(BaseSettings):
    # Settings are set automatically using environment variables
    SERVER_NAME: str = "id.crashbloxserver.net"
    SECRET_KEY: str = str(secrets.randbits(32))
    SERVER_HOST: str = "https://id.crashbloxserver.net"
    BACKEND_CORS_ORIGINS: List[AnyHttpUrl] = ["http://crashbloxserver.net", "https://crashbloxserver.net", "https://www.crashbloxserver.net"]

    @validator("BACKEND_CORS_ORIGINS", pre=True)
    def assemble_cors_origins(cls, v: Union[str, List[str]]) -> Union[List[str], str]:
        if isinstance(v, str) and not v.startswith("["):
            return [i.strip() for i in v.split(",")]
        elif isinstance(v, (list, str)):
            return v
        raise ValueError(v)

    # PROJECT_NAME: str

    GOOGLE_OAUTH_CLIENT_ID: str = "183180074220-lhc38kq4uc7itth69oadejcc0fnep8lj.apps.googleusercontent.com"
    GOOGLE_OAUTH_CLIENT_SECRET: str = "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"
    #
    # DB_SERVER: str
    # DB_USER: str
    # DB_PASSWORD: str
    # SQLALCHEMY_DB_URI: Optional[str] = None
    DB_URI: str = "sqlite+aiosqlite:///./test.db"

    OAUTH_JWT_SECRET: str = "C24F8EB53C264E40DFB3CD71FDEA7AEB "

    class Config:
        case_sensitive = True


settings = _Settings()
