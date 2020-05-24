using System.Collections;
using System.Collections.Generic;
using UnityEngine;
 /*****************************************/
/*
*
SOURCE CODE FOR MAKING ANY 2D OBJECT A MOVER USING  A END POSTION MARKER 
ANIMATIONS HANDLED :

1. IDLE
2. WALK


*
*/
/*****************************************/
public class SpiderWalker : MonoBehaviour
{
    private Rigidbody2D myrb;
    public float speed;
    public Transform startposn, endposn;
    private bool collision;
    private Vector3 temp;
    private Gameplay_script gameplay;





  void Awake()
    {
        myrb = GetComponent<Rigidbody2D>();
        gameplay = GameObject.Find("GameplayController").GetComponent<Gameplay_script>();
    }
    // Start is called before the first frame update
    void Start()
    {
        
    }
    private void Update()
    {
       // speed = Time.deltaTime * speed;
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        //moveleft();

        moveright();
        Changedirection();
        if (temp.x == 1f)
        {
            moveright();
        }
        else
        {
            moveleft();
        }
    
    
    }

    public void Changedirection()
    {
        collision = Physics2D.Linecast(startposn.position, endposn.position, 1 << LayerMask.NameToLayer("Ground"));
        Debug.DrawLine(startposn.position, endposn.position,Color.green);
       
          

         if(!collision)
        {
              temp = transform.localScale;
            if(temp.x==1f)
            {
                temp.x = -1f;
                 
            }
            else
            {
                temp.x = 1f;
                 
            }

            transform.localScale = temp;
        
            
        }
    
    
    }
   
    public void moveleft()
    {
     
        myrb.velocity = -transform.right * speed;
    }


    public void moveright()
    {
        
        myrb.velocity = transform.right * speed;
    
            }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "Player")
        {
            Destroy(collision.gameObject);

            gameplay.PlayerDied();

        }
    }



}
