using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AirandTimerCollectable : MonoBehaviour
{
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.tag=="Player")
        {
            if(gameObject.name=="Air")
            {
                GameObject.Find("GameplayController").GetComponent<AirPlayController>().air = 10f;
                Destroy(gameObject);
            }
            if (gameObject.name == "Timer")
            { 
                GameObject.Find("GameplayController").GetComponent<LevelTimer>().leveltimer = 10f;
                Destroy(gameObject);
            }
        }
    }
}
