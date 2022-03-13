from typing import List, Union, Optional

from pydantic import AnyHttpUrl, BaseSettings, EmailStr, HttpUrl, validator


class _Settings(BaseSettings):
    SECRET_KEY: str
    SERVER_NAME: str
    SERVER_HOST: AnyHttpUrl
    BACKEND_CORS_ORIGINS: List[AnyHttpUrl]

    @validator("BACKEND_CORS_ORIGINS", pre=True)
    def assemble_cors_origins(cls, v: Union[str, List[str]]) -> Union[List[str], str]:
        if isinstance(v, str) and not v.startswith("["):
            return [i.strip() for i in v.split(",")]
        elif isinstance(v, (list, str)):
            return v
        raise ValueError(v)

    PROJECT_NAME: str

    DB_SERVER: str
    DB_USER: str
    DB_PASSWORD: str
    SQLALCHEMY_DB_URI: Optional[str] = None

    class Config:
        case_sensitive = True


settings = _Settings()
