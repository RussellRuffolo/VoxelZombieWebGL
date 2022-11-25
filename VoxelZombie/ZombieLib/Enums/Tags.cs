namespace ZombieLib
{
    public enum Tags: byte
    {
        MAP_TAG = (byte)'a',
        PLAYER_INIT_TAG = (byte)'b',
        ADD_PLAYER_TAG = (byte)'c',
        INPUT_TAG = (byte)'d',
        BLOCK_EDIT_TAG = (byte)'e',
        OTHER_POSITION_TAG = (byte)'f',
        PLAYER_STATE_TAG = (byte)'g',
        REMOVE_PLAYER_TAG = (byte)'h',
        MAP_LOADED_TAG = (byte)'i',
        MAP_RELOADED_TAG = (byte)'j',
        LOGIN_ATTEMPT_TAG = (byte)'k',
        CHAT_TAG = (byte)'l',
        CLIENT_POSITION_TAG = (byte)'m',
        CREATE_ACCOUNT_TAG = (byte)'n',
        TOKEN_TAG = (byte)'o',
        USERNAME_TAG = (byte)'p',
        PATCH_USERNAME_TAG = (byte)'q',
        ACTION_TAG = (byte)'r',
        GRENADE_CREATION_TAG = (byte)'s',
        GRENADE_POSITION_TAG = (byte)'t',
        GRENADE_DESTRUCTION_TAG = (byte)'u',
        CHUNK_DATA_TAG = (byte)'v',
        CHUNK_ACTIVE_TAG = (byte)'w',
        CHUNK_INACTIVE_TAG = (byte)'x',
}
}