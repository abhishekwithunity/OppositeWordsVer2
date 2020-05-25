using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class selectasprite : MonoBehaviour
{   
    public Sprite[] learntiles;
    public Sprite[] GSnames;
    public GameObject[] options;
    public SpriteRenderer TileHolder;
    public SpriteRenderer NameGS;
    public int currentsprite_switch;
    public SpriteRenderer[] sp1;
    private Vector2[] position1;
    public static bool quizfinished = true;
    public AudioSource wronganswer;
   
    public AudioSource ChangeTile_AudioFx;


   
    // Start is called before the first frame update
    void Start()
    {
        currentsprite_switch = Random.Range(1, 40);
        changesprite();
    }

    // Update is called once per frame
    void Update()
    {
        if (DragandDrop.locked && quizfinished)
        {
            StartCoroutine(PlayAnimationBEforeShowingTile());
            //DragandDrop.locked = false; 
           
        }
       // if(DragandDrop.wronganswer && quizfinished==false)
        if (DragandDrop.wronganswer)
        {
            StartCoroutine(PlayWrongAnswerAudiofx());
        }

    }

    IEnumerator PlayWrongAnswerAudiofx()
    {
        //   Instantiate(ChangeTileAnim, transform.position, Quaternion.identity);
        Instantiate(wronganswer, transform.position, Quaternion.identity);
        wronganswer.Play();
        // all the animations will be played here
        yield return new WaitForSeconds(0.01f);
        DragandDrop.wronganswer= false;

         
    }




    IEnumerator PlayAnimationBEforeShowingTile()
    {
     //   Instantiate(ChangeTileAnim, transform.position, Quaternion.identity);
        Instantiate(ChangeTile_AudioFx, transform.position, Quaternion.identity);
        ChangeTile_AudioFx.Play();

        // all the animations will be played here
        yield return new WaitForSeconds(0.1f);
        quizfinished = false;
       
        //if the next line is uncommented then the code will run automatically 
        //changesprite();
    }
   


    public void returnanswertoposition()
    {
        if (DragandDrop.locked)
        {
           
            options[0].transform.position = new Vector2(-4.71f, -3.39f);  

            DragandDrop.locked = false;
        } 
    }

    public void changesprite()
    {
        returnanswertoposition();
        currentsprite_switch = Random.Range(1, 40);
        options[1].GetComponent<SpriteRenderer>().sprite = GSnames[Random.Range(currentsprite_switch, 40)];
        options[2].GetComponent<SpriteRenderer>().sprite = GSnames[Random.Range(currentsprite_switch, 40)];

        if (currentsprite_switch % 2 == 0) //condition for Even
        {
            Debug.Log("" + currentsprite_switch % 2);
            options[0].GetComponent<SpriteRenderer>().sprite = GSnames[currentsprite_switch + 1];
            options[1].GetComponent<SpriteRenderer>().sprite = GSnames[Random.Range(currentsprite_switch, 40)];
            options[2].GetComponent<SpriteRenderer>().sprite = GSnames[Random.Range(currentsprite_switch, 40)];

        
        }
        if (currentsprite_switch % 2 == 1)//condtion if odd 
        {
            Debug.Log("" + currentsprite_switch % 2);
            options[0].GetComponent<SpriteRenderer>().sprite = GSnames[currentsprite_switch - 1];
            options[1].GetComponent<SpriteRenderer>().sprite = GSnames[Random.Range(currentsprite_switch, 40)];
            options[2].GetComponent<SpriteRenderer>().sprite = GSnames[Random.Range(currentsprite_switch, 40)];


        }

        if (currentsprite_switch == 0) //condition for First Sprite
        {
            options[0].GetComponent<SpriteRenderer>().sprite = GSnames[currentsprite_switch - 1];
            options[1].GetComponent<SpriteRenderer>().sprite = GSnames[Random.Range(currentsprite_switch + 2, 40)];
            options[2].GetComponent<SpriteRenderer>().sprite = GSnames[Random.Range(currentsprite_switch + 2, 40)];


        }
        NameGS.sprite = GSnames[currentsprite_switch];
        ShowNameofTiles(currentsprite_switch);
        quizfinished = true;
    }
   
    public void ShowNameofTiles(int currentsprite_switch)

    {

        switch (currentsprite_switch)
        {
            case 39:
                TileHolder.sprite = learntiles[currentsprite_switch];NameGS.sprite = GSnames[currentsprite_switch];
                options[0].GetComponent<SpriteRenderer>().sprite = GSnames[currentsprite_switch - 1];
                break;

            case 38:
                TileHolder.sprite = learntiles[currentsprite_switch];break;
            case 37:
                TileHolder.sprite = learntiles[currentsprite_switch];break;
            case 36:
                TileHolder.sprite = learntiles[currentsprite_switch];break;
            case 35:
                TileHolder.sprite = learntiles[currentsprite_switch];break;
            case 34:
                TileHolder.sprite = learntiles[currentsprite_switch];break;
            case 33:
                TileHolder.sprite = learntiles[currentsprite_switch];break;
            case 32:
                TileHolder.sprite = learntiles[currentsprite_switch];break;
            case 31:
                TileHolder.sprite = learntiles[currentsprite_switch];break;
            case 30:
                TileHolder.sprite = learntiles[currentsprite_switch];break;
            case 29:
                TileHolder.sprite = learntiles[currentsprite_switch];break;
            case 28:
                TileHolder.sprite = learntiles[currentsprite_switch];break;
            case 27:
                TileHolder.sprite = learntiles[currentsprite_switch];break;
            case 26:
                TileHolder.sprite = learntiles[currentsprite_switch];break;
            case 25:
                TileHolder.sprite = learntiles[currentsprite_switch]; break;
            case 24:
                TileHolder.sprite = learntiles[currentsprite_switch];break;
            case 23:
                TileHolder.sprite = learntiles[currentsprite_switch];break;
            case 22:
                TileHolder.sprite = learntiles[currentsprite_switch];break;
            case 21:
                TileHolder.sprite = learntiles[currentsprite_switch];break;
            case 20:
                TileHolder.sprite = learntiles[currentsprite_switch];break;
            case 19:
                TileHolder.sprite = learntiles[currentsprite_switch];break;
            case 18:
                TileHolder.sprite = learntiles[currentsprite_switch];break;
            case 17:
                TileHolder.sprite = learntiles[currentsprite_switch];break;
            case 16:
                TileHolder.sprite = learntiles[currentsprite_switch];break;
            case 15:
                TileHolder.sprite = learntiles[currentsprite_switch];break;
            case 14:
                TileHolder.sprite = learntiles[currentsprite_switch];break;
            case 13:
                TileHolder.sprite = learntiles[currentsprite_switch];break;
            case 12:
                TileHolder.sprite = learntiles[currentsprite_switch];break;
            case 11:
                TileHolder.sprite = learntiles[currentsprite_switch];break;
            case 10:
                TileHolder.sprite = learntiles[currentsprite_switch];break;
            case 9:
                TileHolder.sprite = learntiles[currentsprite_switch];break;
            case 8:
                TileHolder.sprite = learntiles[currentsprite_switch];break;
            case 7:
                TileHolder.sprite = learntiles[currentsprite_switch];break;
            case 6:
                TileHolder.sprite = learntiles[currentsprite_switch];break;
            case 5:
                TileHolder.sprite = learntiles[currentsprite_switch];break;
            case 4:
                TileHolder.sprite = learntiles[currentsprite_switch];break;
            case 3:
                TileHolder.sprite = learntiles[currentsprite_switch];break;
            case 2:
                TileHolder.sprite = learntiles[currentsprite_switch];break;
            case 1:
                TileHolder.sprite = learntiles[currentsprite_switch]; break;
            
            case 0:
                TileHolder.sprite = learntiles[currentsprite_switch]; 
                options[0].GetComponent<SpriteRenderer>().sprite = GSnames[currentsprite_switch + 1];
                break;
        }


    }






    public void LoadtheLevelMenu()
    {
        
        SceneManager.LoadSceneAsync("LevelMenu");

    }
   
}
