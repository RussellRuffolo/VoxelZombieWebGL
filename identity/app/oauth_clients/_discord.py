from typing import TypedDict, Optional, List, Tuple

import httpx
from httpx_oauth.oauth2 import BaseOAuth2
from httpx_oauth.errors import GetIdEmailError
from typing import cast, Dict, Any

AUTHORIZE_ENDPOINT = "https://discord.com/api/oauth2/authorize"
ACCESS_TOKEN_ENDPOINT = "https://discord.com/api/oauth2/token"
REVOKE_TOKEN_ENDPOINT = "https://discord.com/api/oauth2/token/revoke"
BASE_SCOPES = ["identify"]
PROFILE_ENDPOINT = "https://discord.com/api/v10/oauth2/@me"


class DiscordOAuth2AuthorizeParams(TypedDict, total=False):
    pass


class DiscordOAuth2(BaseOAuth2[DiscordOAuth2AuthorizeParams]):
    def __init__(
        self,
        client_id: str,
        client_secret: str,
        scope: Optional[List[str]] = BASE_SCOPES,
        name="discord",
    ):
        super().__init__(
            client_id,
            client_secret,
            AUTHORIZE_ENDPOINT,
            ACCESS_TOKEN_ENDPOINT,
            ACCESS_TOKEN_ENDPOINT,
            REVOKE_TOKEN_ENDPOINT,
            name=name,
            base_scopes=scope,
        )

    async def get_id_email(self, token: str) -> Tuple[str, str]:
        async with httpx.AsyncClient() as client:
            response = await client.get(
                PROFILE_ENDPOINT,
                headers={**self.request_headers, "Authorization": f"Bearer {token}"},
            )

            if response.status_code >= 400:
                raise GetIdEmailError(response.json())

            data = cast(Dict[str, Any], response.json())
            user_id = data["user"]["id"]
            print(str(user_id))
            return str(user_id), ""
