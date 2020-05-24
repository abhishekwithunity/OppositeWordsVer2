using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class AirPlayController : MonoBehaviour
{
    private Slider airslider;
    private GameObject player;
    public float air=10f;
    public float airburnrate = 0.01f;//1f


    public void GetReferences()
    {
        airslider = GameObject.Find("Air_UI_Slider").GetComponent<Slider>();
        player = GameObject.Find("Player");
        airslider.minValue = 0f;
        airslider.maxValue = air;
        airslider.value = airslider.maxValue;
    }
    private void Awake()
    {
        GetReferences();
    }
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(!player)
        {
            return;
        }
    
    if(air>0)
        {
            air -= airburnrate * Time.deltaTime;
            airslider.value = air;
        }
        else
        {
            //Destroy(player);
            GetComponent<Gameplay_script>().PlayerDied();
        }
    
    
    }
}
