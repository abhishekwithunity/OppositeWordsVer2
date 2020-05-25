using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;



public class LevelMenuScript : MonoBehaviour
{

    //[Header("Showig Banner Ads on Game Over ")]
    //private AdManager admanager;

    private void Awake()
    {
     //   admanager = GameObject.Find("AdManager").GetComponent<AdManager>();
    }

    public void Level1Load()
    {
      //  AdManager.Instance.ShowRewardedVideo();
        Time.timeScale = 1f;
        SceneManager.LoadSceneAsync("Play_Opp");
        Time.timeScale = 1f;
    }
    public void Level2Load()
    {
       // AdManager.Instance.ShowRewardedVideo();
        Time.timeScale = 1f;

        //admanager.ShowRewardedVideo();
        SceneManager.LoadSceneAsync("Learn");
        Time.timeScale = 1f;
    }
    










    public void BacktoMenu()
    {
        AdManager.Instance.ShowInterstitial();
        SceneManager.LoadSceneAsync("MainMenu");
    }
}
