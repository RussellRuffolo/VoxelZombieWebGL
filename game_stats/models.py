import enum
from typing import Optional
from sqlalchemy import types
from sqlmodel import SQLModel, Field, Column
from pydantic.types import UUID4
import datetime

Key = int
PlayerID = UUID4

# Let's keep file complexity low
class Enums:
    class KillCause(enum.Enum):
        PATIENT_ZERO = enum.auto()
        PLAYER_KILL = enum.auto()
        JOINED_LATE = enum.auto()
        CHEAT_ACTION = enum.auto()


class _BaseModel(SQLModel):
    id: Optional[Key] = Field(default=None, primary_key=True)
    # I'm not going to bother with server defaults;
    #  letting Python handle created time stamp is good enough.
    created_ts: Optional[datetime.datetime] = Field(
        default_factory=datetime.datetime.now
    )
    deactivated_ts: Optional[datetime.datetime]


class Game(_BaseModel, table=True):
    __tablename__ = "games"



class Kill(_BaseModel, table=True):
    __tablename__ = "kills"
    victim: PlayerID
    cause: Enums.KillCause = Field(sa_column=Column(types.Enum(Enums.KillCause)))
    # Todo: add validator ensuring that if CHEAT_ACTION or PLAYER_KILL is the cause of death the "player" field is filled out else None
    killer: Optional[PlayerID]
    game_id: Optional[Key] = Field(default=None, foreign_key="games.id")


class PlayerConnection(_BaseModel, table=True):
    __tablename__ = "player_connections"
    player: PlayerID
    game_id: Optional[Key] = Field(default=None, foreign_key="games.id")



