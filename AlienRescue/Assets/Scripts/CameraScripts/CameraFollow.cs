using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraFollow : MonoBehaviour
{
    public Transform player;
    public float minx, maxx;
    // Start is called before the first frame update
    void Start()
    {
       // player = GameObject.Find("Player").transform;
    }

    // Update is called once per frame
    void Update()
    {
        if (player !=null)
        {
            Vector3 temp = transform.position;
            temp.x = player.position.x;
            temp.y = player.position.y+2.0f; 
            if (temp.x<minx)
            {
                temp.x = minx;
            }
            if (temp.x>maxx)
            {
                temp.x = maxx;
            }
            transform.position = temp;
        
        
        }
        
    }
}
