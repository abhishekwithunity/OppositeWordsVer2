using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class changealpha : MonoBehaviour
{
    public SpriteRenderer[] diamond;

    public bool changecolor;
    public int counter;
    // Start is called before the first frame update
    private Door leveldoor;

    private void Awake()
    {
        leveldoor = GameObject.Find("Door").GetComponent<Door>();
    }
    void Start()
    {
        if (leveldoor.collectiblecount==3)
        {
            diamond[0].color=new Color(1f, 1f, 1f, 0.5f); 
            diamond[1].color=new Color(1f, 1f, 1f, 0.5f); 
            diamond[2].color=new Color(1f, 1f, 1f, 0.5f); 
        }
    
    
    
    }

    // Update is called once per frame
    void Update()
    {
        if (leveldoor.collectiblecount == 2)
        {
            diamond[0].color = new Color(1f, 1f, 1f, 1.0f);
            diamond[1].color = new Color(1f, 1f, 1f, 0.5f);
            diamond[2].color = new Color(1f, 1f, 1f, 0.5f);
        }
        if (leveldoor.collectiblecount == 1)
        {
            diamond[0].color = new Color(1f, 1f, 1f, 1.0f);
            diamond[1].color = new Color(1f, 1f, 1f, 1.0f);
            diamond[2].color = new Color(1f, 1f, 1f, 0.5f);
        }
        if (leveldoor.collectiblecount == 0)
        {
            diamond[0].color = new Color(1f, 1f, 1f, 1.0f);
            diamond[1].color = new Color(1f, 1f, 1f, 1.0f);
            diamond[2].color = new Color(1f, 1f, 1f, 1.0f);
        }

         
    
    }




}
