using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LevelTimer : MonoBehaviour
{
    private Slider levelslider;
    private GameObject player;
    public float leveltimer = 10f;
    public float leveltimerrate = 0.1f;


    public void GetReferences()
    {
        levelslider = GameObject.Find("Timer_UI_Slider").GetComponent<Slider>();
        player = GameObject.Find("Player");
        levelslider.minValue = 0f;
        levelslider.maxValue = leveltimer;
        levelslider.value = levelslider.maxValue;
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
        if (!player)
        {
            return;
        }

        if (leveltimer > 0)
        {
            leveltimer -= leveltimerrate * Time.deltaTime;
            levelslider.value = leveltimer;
        }
        else
        {
            //Destroy(player);
            GetComponent<Gameplay_script>().PlayerDied();
        }


    }
}