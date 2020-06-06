using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;



public class LevelMenuScript : MonoBehaviour
{

     

   
    public void Level1Load()
    {
        
        AdManager.Instance.ShowRewardedVideo();
        Time.timeScale = 1f;
        SceneManager.LoadSceneAsync("Play_Opp");
        Time.timeScale = 1f;
    }
    public void Level2Load()
    {
        AdManager.Instance.ShowRewardedVideo();
        Time.timeScale = 1f;
        SceneManager.LoadSceneAsync("Learn");
        Time.timeScale = 1f;
    }
    










    public void BacktoMenu()
    {
        AdManager.Instance.ShowInterstitial();
        SceneManager.LoadSceneAsync("MainMenu");
    }
}
