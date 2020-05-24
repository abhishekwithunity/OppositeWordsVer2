using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Gameplay_script : MonoBehaviour
{
    
    //public GameObject Pausepanel;
    //public GameObject LevelFinPanel;
    public static Gameplay_script instance;
    public Sprite[] learntiles;
    public SpriteRenderer ShowTileHolder;
    public int currentsprite,i;
    public Text RightPanelText,LeftPanelText;
    [Header("Showig Banner Ads on Game Over ")]
   // private AdManager admanager;
    public GameObject ChangeTileAnim;
    public AudioSource ChangeTile_AudioFx;

    public void Makeinstance()
    {
        if (instance == null)
        {
            instance = this;
        }
    }


    private void Awake()
    {
//        admanager = GameObject.Find("AdManager").GetComponent<AdManager>();
    }


    public void incrementsprite()
    {
        


        if (i>=learntiles.Length-1)
        {   
            StartCoroutine(PlayAnimationBEforeShowingTile()); 
         }
        else
        {
            i++;
            StartCoroutine(PlayAnimationBEforeShowingTile()); }

         
    }
    public void decerementsprite()
    {
        if (i<= 0)
        {
            StartCoroutine(PlayAnimationBEforeShowingTile()); 
             
            
        }
        else
        {
            i--;
            StartCoroutine(PlayAnimationBEforeShowingTile()); 
             
             

        }
   
    }

    private void Start()
    {

        i = 0;
        ShowTileHolder.sprite = learntiles[currentsprite];
        ShowNameofTiles(i);
    }


    public void ShowNameofTiles(int currentsprite_switch)

    {
        
        switch (currentsprite_switch)
        {
            case 19:
                RightPanelText.text = "YOUNG";
                LeftPanelText.text = "OLD";
                break;   
            case 18:
                RightPanelText.text = "CURLY";
                LeftPanelText.text = "STRAIGHT";
                break;
            case 17:
                RightPanelText.text = "BRAVE";
                LeftPanelText.text = "AFRAID";
                break;
            case 16:
                RightPanelText.text = "SMALL";
                LeftPanelText.text = "BIG";
                break;
            case 15:
                RightPanelText.text = "GIRL";
                LeftPanelText.text = "BOY";
                break;
            case 14:
                RightPanelText.text = "SERIOUS";
                LeftPanelText.text = "FUNNY";
                break;
            case 13:
                RightPanelText.text = "OUT";
                LeftPanelText.text = "IN";
                break;
            case 12:
                RightPanelText.text = "GOT-UP";
                LeftPanelText.text = "FALL-DOWN";
                break;
            case 11:
                RightPanelText.text = "FINISH";
                LeftPanelText.text = "START";
                break;
            case 10:
                RightPanelText.text = "TURN-OFF";
                LeftPanelText.text = "TURN-ON";
                break;
            case 9:
                RightPanelText.text = "EXCITED";
                LeftPanelText.text = "CALM";
                break;
            case 8:
                RightPanelText.text = "SHARP";
                LeftPanelText.text = "BLUNT";
                break;
            case 7:
                RightPanelText.text = "SHORT";
                LeftPanelText.text = "LONG";

                break;
            case 6:
                RightPanelText.text = "EASY";
                LeftPanelText.text = "COMPLEX";

                break;
            case 5:
                RightPanelText.text = "HOT";
                LeftPanelText.text = "COLD";
                break;
          
            case 4:
                RightPanelText.text = "DARK";
                LeftPanelText.text = "LIGHT";
                break;
            
            case 3:
                RightPanelText.text = "OUTSIDE";
                LeftPanelText.text = "INSIDE";
                break;
            case 2:
                RightPanelText.text = "EMPTY";
                LeftPanelText.text =  "FULL";
                break;
             case 1:
                RightPanelText.text = "WET";
                LeftPanelText.text =  "DRY";
                break;
            case 0:
                RightPanelText.text = "OPEN";
                LeftPanelText.text = "CLOSED";
                break;
                }

       
    }

    IEnumerator PlayAnimationBEforeShowingTile()
    {
        Instantiate(ChangeTileAnim, transform.position, Quaternion.identity);
        Instantiate(ChangeTile_AudioFx, transform.position, Quaternion.identity);
        ChangeTile_AudioFx.Play();
        yield return new WaitForSeconds(2.0f);
        ShowTileHolder.sprite = learntiles[i];
        ShowNameofTiles(i);
    }
    public void PauseGame()
    {
        //admanager.ShowInterstitial();
        Time.timeScale = 0f;
        //leveldoor.PausePanel.SetActive(true);
    }

    public void ResumeGame()
    {
        //admanager.ShowRewardedVideo();
        Time.timeScale = 1f;
        //leveldoor.PausePanel.SetActive(false);
    }


    public void LoadtheLevelMenu()
    {
        
        SceneManager.LoadSceneAsync("LevelMenu");

    }
    public void BacktoMainMenu()
    {
        Time.timeScale = 1f;
        SceneManager.LoadSceneAsync("MainMenu");
    }
    public void RestarttheGame()
    {
        //StartCoroutine(ShowInterstitialAd());
        Time.timeScale = 1f;
        //leveldoor.PausePanel.SetActive(false);
        SceneManager.LoadSceneAsync("Gameplay");
    }
    public void PlayerDied()
    {
       
        //player.playdeadanimation();
        //leveldoor.GameOverPanel.SetActive(true);
        //will show banner Ad on Player Dying 
        //admanager.ShowBanner();

    }

     
    public void ProceedToNextLevel()
    {

        //StartCoroutine(ShowRewardedVideo());
        //admanager.DestroyBanner();
        Time.timeScale = 1f;
        //SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
        Time.timeScale = 1f;
    }
    public void RestarttheLevel()
    {

       // admanager.ShowRewardedVideo();
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
        Time.timeScale = 1f;
    }
   


















    IEnumerator ShowInterstitialAd()
    {
        //admanager.ShowInterstitial();
        yield return new WaitForSeconds(2f);

    }
    IEnumerator ShowRewardedVideo()
    {
        //admanager.ShowRewardedVideo();
        yield return new WaitForSeconds(2f);
      //  admanager.
    }

    IEnumerator ShowBannerAD()
    {
       // admanager.ShowBanner();
        yield return new WaitForSeconds(2f);
      // admanager.DestroyBanner();
    }


    public void ShowBannerAdonMainMenu()
    {
        if (SceneManager.GetActiveScene().buildIndex == 0)
        {
            Debug.Log("Main Menu");
          //  admanager.ShowBanner();

        } 
    }

    public void RemoveBannerAdonLevelMenu()
    {
        if (SceneManager.GetActiveScene().buildIndex < 1)
        {
            Debug.Log("Level Menu");
        //    admanager.DestroyBanner();

        }
    }


    private void Update()
    {
         
    }
}
