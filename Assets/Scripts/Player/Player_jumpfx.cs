using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player_jumpfx : MonoBehaviour
{
   
    private Player_Script player;
    // Start is called before the first frame update
    private void Awake()
    {
        player = GameObject.Find("Player").GetComponent<Player_Script>();
    }
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
       if(player.isjumpbuttonpressed)
        {
             
           
        }
        
    }
}
