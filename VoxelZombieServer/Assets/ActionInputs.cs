public struct ActionInputs
{
    public bool One;
    public bool Two;
    public bool Three;
    public bool MouseZero;
    public bool MouseOne;
    public bool MouseTwo;

    public float PosX;
    public float PosY;
    public float PosZ;


    public float ForwardX;
    public float ForwardY;
    public float ForwardZ;


    public ActionInputs(bool one, bool two, bool three, bool mouseZero, bool mouseOne, bool mouseTwo, float posX,
        float posY, float posZ, float forwardX, float forwardY, float forwardZ)
    {
        One = one;
        Two = two;
        Three = three;
        MouseZero = mouseZero;
        MouseOne = mouseOne;
        MouseTwo = mouseTwo;
        PosX = posX;
        PosY = posY;
        PosZ = posZ;
        ForwardX = forwardX;
        ForwardY = forwardY;
        ForwardZ = forwardZ;
    }
}