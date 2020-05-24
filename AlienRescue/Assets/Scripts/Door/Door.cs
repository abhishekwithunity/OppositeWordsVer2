using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Door : MonoBehaviour
{
    public static Door instance;
    [SerializeField]
    private Animator dooranim;
    private BoxCollider2D box;

    public int collectiblecount;
    [HideInInspector]
    public bool levelcompleted = false;

    [Header("PAnel to show end of Level")]
    public GameObject LevFinPanel;
    [Header("Panel to show Player Dies")]
    public GameObject GameOverPanel;
    [Header("Panel to show on Pause Button")]
    public GameObject PausePanel;
    public GameObject OpenDoor_fx;
    public GameObject Gamefinish_fx;
    public GameObject[] Diamond_Pickup_fx;
    private Player_Script player;
    public bool diamond1collected, diamond2collected, diamond3collected;

   
    public void Makeinstance()
    {
        if (instance==null)
        {
            instance = this;
        }
    }

    IEnumerator opendoor()
    {
        dooranim.Play("Door_Move");
        dooranim.SetBool("OpenDoor", true);
        yield return new WaitForSeconds(0.7f);
        box.isTrigger = true;
      
        OpenDoor_fx.SetActive(true);
        Gamefinish_fx.SetActive(true);

    }
    private void Awake()
    {
        dooranim = GetComponent<Animator>();
        box = GetComponent<BoxCollider2D>();
        player = GameObject.Find("Player").GetComponent<Player_Script>();
       
        diamond1collected = false;
        diamond2collected = false;
        diamond3collected = false;
         

    }
    public void Decrementcollectables()
    {
        collectiblecount--;

        if (collectiblecount == 2)
        {
            Diamond_Pickup_fx[2].SetActive(true);
            Debug.Log("Collected 1");
            diamond1collected = true;
            diamond2collected = false;
            diamond3collected = false;


        }
        if (collectiblecount == 1)
        {
            diamond2collected = true;
            diamond1collected = false;
            diamond3collected = false;
            if(Diamond_Pickup_fx[2].activeSelf)
            {
                Diamond_Pickup_fx[2].SetActive(false);
            }
                
            Diamond_Pickup_fx[1].SetActive(true);Debug.Log("Collected 2");
        }

        if (collectiblecount==0)
        {
            if(Diamond_Pickup_fx[1].activeSelf)
            {
                Diamond_Pickup_fx[1].SetActive(false);
            }
            diamond3collected = true;   
            Diamond_Pickup_fx[0].SetActive(true);Debug.Log("Collected 3");
            StartCoroutine(opendoor());
        }
        
    
    
    }
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "Player")
        {
            Debug.Log("game finished");
            player.StopBGMusic();
            levelcompleted = true;
            LevFinPanel.SetActive(true);
            Time.timeScale = 0f;
        }
    }
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(player.isdead)
        {
            player.playdeadanimation();
           // LevResPanel.SetActive(true);
        }
    }

    public void ShowLevelFinPanel()
    {
        if (levelcompleted==true)
        {
           
            levelcompleted = false;

        } 
    }
}
