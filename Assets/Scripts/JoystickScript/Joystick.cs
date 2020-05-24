using UnityEngine;
using UnityEngine.EventSystems;
using System.Collections;

public class Joystick : MonoBehaviour, IPointerUpHandler , IPointerDownHandler
{

    private Player_Script player;
    private Gameplay_script gamemanager;
    void Awake()
    {
        //player = GameObject.Find("Player").GetComponent<Player_Script>();
//        gamemanager = GameObject.Find("GameplayController").GetComponent<Gameplay_script>();
        //player = GameObject.Find("Player2").GetComponent<Player_Script>();

    }

    public void OnPointerDown(PointerEventData data)
    {
        if (gameObject.name == "Left")
        {
            Debug.Log("Left Pressed");
            //player.SetMoveLeft(true);
        }
        else
        {
            Debug.Log("Right Pressed");
           // player.SetMoveLeft(false);
        }
    }

    public void OnPointerUp(PointerEventData data)
    {
        //player.StopMoving();
    }


} // Joystick
