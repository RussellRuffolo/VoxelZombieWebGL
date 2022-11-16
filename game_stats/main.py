import os.path

from fastapi import FastAPI, APIRouter
from pydantic import BaseSettings
from sqlmodel import create_engine

from models import *


### Settings
class _Settings(BaseSettings):
    # I don't like creating an instance just to use it staticly,
    #  but that's how the FastAPI docs does it.
    # https://fastapi.tiangolo.com/advanced/settings/#pydantic-settings
    DB_FILE_NAME: str = "./player_stats.db"
    DB_URI: str = f"sqlite:///./{DB_FILE_NAME}"

    class Config:
        case_sensitive = True


settings = _Settings()

### Database
# Todo: ensure my understanding is correct (that foreign keys in SQLModel are NOT nullable)
db_engine = create_engine(settings.DB_URI)


### Routes
action_router = APIRouter()


@action_router.post("/begin-game")
def start_game(game_id):
    pass

@action_router.post("/end-game")
def end_game(game_id):
    pass

@action_router.post("/connect-player-to-game")
def connect_player_to_game(player, game_id):
    pass

@action_router.post("/disconnect-player-from-game")
def disconnect_player_from_game(player, game_id):
    pass

@action_router.post("/record-kill")
def record_kill(player, reason, game_id):
    pass


data_router = APIRouter()
# Todo: figure out GraphQL to unite all data routes under a single gateway




app = FastAPI()
app.add_route(route=action_router, path="/action")
app.add_route(route=data_router, path="/data")

if __name__ == "__main__":
    print("Starting debug server")
    import uvicorn

    if not os.path.isfile(settings.DB_FILE_NAME):
        print("Initializing database")
        SQLModel.metadata.create_all(db_engine)
    uvicorn.run("main:app", reload=True)
