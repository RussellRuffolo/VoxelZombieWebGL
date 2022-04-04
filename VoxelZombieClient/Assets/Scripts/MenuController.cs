using UnityEngine;
using UnityEngine.UI;

public class MenuController : MonoBehaviour
{
    public float xSensitivity;

    public float ySensitivity;

    [SerializeField] public Slider xSlider;

    [SerializeField] public Slider ySlider;

    [SerializeField] private Canvas MenuCanvas;


    // Start is called before the first frame update
    void Start()
    {
        MenuCanvas.enabled = false;

        xSlider.onValueChanged.AddListener(XChanged);

        ySlider.onValueChanged.AddListener(YChanged);
    }

    void XChanged(float value)
    {
        xSensitivity = value;
    }

    void YChanged(float value)
    {
        ySensitivity = value;
    }
}