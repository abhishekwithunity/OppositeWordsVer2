using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player_Script : MonoBehaviour
{
    private Rigidbody2D myrb;
    private Animator myanim;
    private bool isgrounded = true;
    public float moveforce = 20f, jumpforce = 700f, maxvelocity = 4f;
    public static Player_Script instance;
    private bool moveLeft, moveRight;
    public AudioSource feetmove_effect;
    private bool ismoving = false;
     public bool isdead = false;
    public AudioSource BGMusic;
    public bool isjumpbuttonpressed = false;
    [Header("Variables and Effect for Jump Animation")]
    public GameObject jumpeffect;
    public Transform jumpposn;
    public AudioSource jumpaudiofx;
    public AudioSource dyingaudiofx;
    [Header("Die Effects")]
    public GameObject DieFx;


    private void Awake()
    {
        Initializevaariable();

         
    }
    public void Initializevaariable()
    {
         
        myrb = GetComponent<Rigidbody2D>();
        myanim = GetComponent<Animator>();
        BGMusic.Play();
        
    }
    // Start is called before the first frame update
    void Start()
    {
       
    }
    private void FixedUpdate()
    {   
        
        PlayerWalkJoystick();
      
        /*****/
        /**For Debugging  this we need to setup the level
        /*****/

          //playerwalkkb();

    }
    public void SetMoveLeft(bool moveLeft)
    {
        this.moveLeft = moveLeft;
        this.moveRight = !moveLeft;
    }

    public void StopMoving()
    {
        this.moveLeft = false;
        this.moveRight = false;
    }

    void PlayerWalkJoystick()
    {
        float forceX = 0f;
        float vel = Mathf.Abs(myrb.velocity.x);

        if (moveRight)
        {

            if (vel < maxvelocity)
            {
                if (isgrounded)
                {
                    ismoving = true;addfeetsoundfx();
                    forceX = moveforce;

                }
                else
                {
                    ismoving = false;addfeetsoundfx();
                    forceX = moveforce * 1.1f;
                }
            }

            Vector3 scale = transform.localScale;
            scale.x = 1f;
            transform.localScale = scale;
            Debug.Log("Joystick Right Pressed");
            myanim.SetBool("Walk", true);


        }
        else if (moveLeft)
        {

            if (vel < maxvelocity)
            {
                if (isgrounded)
                {
                    ismoving = true;addfeetsoundfx();
                    forceX = -moveforce;
                }
                else
                {
                    ismoving = false;addfeetsoundfx();
                    forceX = -moveforce * 1.1f;
                }
            }

            Vector3 scale = transform.localScale;
            scale.x = -1f;
            transform.localScale = scale;
            Debug.Log("Joystick Left Pressed");
            myanim.SetBool("Walk", true);

        }
        else
        {
            myanim.SetBool("Walk", false);
        }

        myrb.AddForce(new Vector2(forceX, 0));

    }

    public void StopBGMusic()
    {
        BGMusic.Stop();
    }
    public void playdeadanimation()
    {
        isdead = true;
        StartCoroutine(stopdieanimation());
        StopBGMusic();
        dyingaudiofx.Stop();
        //DieFx.SetActive(false);
    }



    IEnumerator stopdieanimation()
    {
        myanim.SetBool("Die", true);
        //Play the Die Fx Here
        DieFx.SetActive(true);
        dyingaudiofx.Play();
        Debug.Log("Dying Animation hsould Play");
        yield return new WaitForSeconds(1.0f);
        if(dyingaudiofx.isActiveAndEnabled)
        {
        DieFx.SetActive(false);
        }
        Time.timeScale = 0f;
   
    
    }

    public void playerwalkkb()
    {
        float forcex = 0f, forcey = 0f;
        float vel = Mathf.Abs(myrb.velocity.x);
        float h = Input.GetAxisRaw("Horizontal");



        if (h > 0)
        {
            if (vel < maxvelocity)
            {
                if (isgrounded)
                {
                    ismoving = true;addfeetsoundfx();
                    forcex = moveforce;
                }
                else
                {
                    ismoving = false;addfeetsoundfx();
                    forcex = moveforce * 1.1f;
                }
            }



            Vector3 scale = transform.localScale;
            scale.x = 1f;
            transform.localScale = scale;
            myanim.SetBool("Walk", true);
        }
        else
            if (h < 0)
        {
            if (vel < maxvelocity)
            {
                if (isgrounded)
                {
                    ismoving = true;addfeetsoundfx();
                    forcex = -moveforce;
                }
                else
                {
                    ismoving = false;addfeetsoundfx();
                    forcex = -moveforce * 1.1f;
                }
            }
            Vector3 scale = transform.localScale;
            scale.x = -1f;
            transform.localScale = scale;
            myanim.SetBool("Walk", true);
        }
        else if (h == 0)
        {
            myanim.SetBool("Walk", false);

        }

        if (Input.GetKey(KeyCode.Space))
        {
            if (isgrounded)
            {
                isgrounded = false;
                forcey = jumpforce;
                jumpaudiofx.Play();
                Instantiate(jumpeffect, jumpposn.position, Quaternion.identity);
                //StartCoroutine(stopjumpanimation());
            }
            
        }
        myrb.AddForce(new Vector2(forcex, forcey));

    }


   
   

    //public void jumpbtn()
    //{

    //    if (Input.GetKey(KeyCode.Space))
    //    {
    //        if (isgrounded)
    //        {
    //            isgrounded = false;
    //            forcey = jumpforce;
    //            myrb.AddForce(new Vector2(forcex, forcey));
    //        }
    //    }
    //}

    public void addfeetsoundfx()
    {
        if (ismoving==true)
        {
            if (!feetmove_effect.isPlaying)
            {
                feetmove_effect.Play();
            }
        }
        else

        {
            feetmove_effect.Stop();
        }
    }
    public void Jump()
    {
        
        if (isgrounded)
        {
            isjumpbuttonpressed = true;
            Debug.Log("Jumped from Player Script");
            jumpaudiofx.Play();
            Instantiate(jumpeffect, jumpposn.position, Quaternion.identity);
            isgrounded = false;
            myrb.AddForce(new Vector2(0, jumpforce));
        }
        isjumpbuttonpressed = false;
    }


    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.tag == "Ground")
        {
            isgrounded = true;
        }
    }

    public void bouncyplatformlaunch(float bounceforce)
    {
        
        if (isgrounded)
        {
            isgrounded = false;
            //forcey = bounceforce;
            myrb.AddForce(new Vector2(0, bounceforce));
            Debug.Log("Player jumped on the bouncy stage");
        }
    }



    // Update is called once per frame
    void Update()
    {

    }
}






















































