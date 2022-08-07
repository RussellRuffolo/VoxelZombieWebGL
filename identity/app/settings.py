import secrets
from typing import List, Union

from pydantic import AnyHttpUrl, BaseSettings, validator


class _Settings(BaseSettings):
    SERVER_NAME: str
    SECRET_KEY: str = str(secrets.randbits(32))
    SERVER_HOST: str
    BACKEND_CORS_ORIGINS: List[AnyHttpUrl]

    @validator("BACKEND_CORS_ORIGINS", pre=True)
    def assemble_cors_origins(cls, v: Union[str, List[str]]) -> Union[List[str], str]:
        if isinstance(v, str) and not v.startswith("["):
            return [i.strip() for i in v.split(",")]
        elif isinstance(v, (list, str)):
            return v
        raise ValueError(v)

    ### Client IDs and secrets
    DISCORD_OAUTH_CLIENT_ID: str
    DISCORD_OAUTH_CLIENT_SECRET: str
    #
    GOOGLE_OAUTH_CLIENT_ID: str
    GOOGLE_OAUTH_CLIENT_SECRET: str

    REDIRECT_URL: AnyHttpUrl

    DB_URI: str = "sqlite+aiosqlite:///./test.db"

    OAUTH_JWT_SECRET: str

    class Config:
        case_sensitive = True


settings = _Settings()
