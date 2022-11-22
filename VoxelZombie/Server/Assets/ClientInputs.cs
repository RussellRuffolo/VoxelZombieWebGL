using UnityEngine;

public struct ClientInputs
{
    public Vector3 MoveVector;
    public Vector3 PlayerForward;
    public bool Slide;
    public bool Jump;

    public int ClientTickNumber;
    public int ServerTickNumber;

    //0 is normal, 1 is water, 2 is lava
    public ushort moveState;

    public ClientInputs(Vector3 moveVec, Vector3 playerForward, bool jump, bool slide)
    {
        MoveVector = moveVec;
        PlayerForward = playerForward;
        Jump = jump;
        Slide = slide;

        moveState = 0;


        ClientTickNumber = 0;
        ServerTickNumber = 0;
    }


}