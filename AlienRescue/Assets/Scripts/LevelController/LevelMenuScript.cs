using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;



public class LevelMenuScript : MonoBehaviour
{

    [Header("Showig Banner Ads on Game Over ")]
    private AdManager admanager;

    private void Awake()
    {
        admanager = GameObject.Find("AdManager").GetComponent<AdManager>();
    }

    public void Level1Load()
    {
        Time.timeScale = 1f;
        SceneManager.LoadSceneAsync("Play");
        Time.timeScale = 1f;
    }
    public void Level2Load()
    {
        Time.timeScale = 1f;

        //admanager.ShowRewardedVideo();
        SceneManager.LoadSceneAsync("Learn");
        Time.timeScale = 1f;
    }
    public void Level3Load()
    {Time.timeScale = 1f;
        SceneManager.LoadSceneAsync("Level3");
        Time.timeScale = 1f;}
    public void Level4Load()
    {Time.timeScale = 1f;
        SceneManager.LoadSceneAsync("Level4");
        Time.timeScale = 1f;}
    public void Level5Load()
    {Time.timeScale = 1f;
        SceneManager.LoadSceneAsync("Level5");
        Time.timeScale = 1f;}
    public void Level6Load()
    {Time.timeScale = 1f;
        SceneManager.LoadSceneAsync("Level6");
        Time.timeScale = 1f;}
    public void Level7Load()
    {Time.timeScale = 1f;
        SceneManager.LoadSceneAsync("Level7");
        Time.timeScale = 1f;}
    public void Level8Load()
    {Time.timeScale = 1f;
        SceneManager.LoadSceneAsync("Level8");
        Time.timeScale = 1f;}
    public void Level9Load()
    {Time.timeScale = 1f;
        SceneManager.LoadSceneAsync("Level9");
        Time.timeScale = 1f;}
    public void Level10Load()
    {Time.timeScale = 1f;
        SceneManager.LoadSceneAsync("Level10");
        Time.timeScale = 1f;}
    public void Level11Load()
    {Time.timeScale = 1f;
        SceneManager.LoadSceneAsync("Level11");
        Time.timeScale = 1f;}
    public void Level12Load()
    {Time.timeScale = 1f;
        SceneManager.LoadSceneAsync("Level12");
        Time.timeScale = 1f;}
    public void Level13Load()
    {Time.timeScale = 1f;
        SceneManager.LoadSceneAsync("Level13");
        Time.timeScale = 1f;}
    public void Level14Load()
    {Time.timeScale = 1f;
        SceneManager.LoadSceneAsync("Level14");
        Time.timeScale = 1f;}
    public void Level15Load()
    {Time.timeScale = 1f;
        SceneManager.LoadSceneAsync("Level15");
        Time.timeScale = 1f;} 



























    public void BacktoMenu()
    {
        SceneManager.LoadSceneAsync("MainMenu");
    }
}
