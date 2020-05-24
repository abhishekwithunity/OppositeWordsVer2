using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenuController : MonoBehaviour
{
    //[Header("Showig Banner Ads on Main Menu ")]
    //private AdManager admanager;


    private void Awake()
    {
        //admanager = GameObject.Find("AdManager").GetComponent<AdManager>();
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }
    public void ShowBannerAdonMainMenu()
    {
        if (SceneManager.GetActiveScene().buildIndex == 0)
        {
            Debug.Log("Main Menu");
           // admanager.ShowBanner();

        }
    }

    public void RemoveBannerAdonLevelMenu()
    {
        if (SceneManager.GetActiveScene().buildIndex ==2)
        {
            Debug.Log("Level Menu");
           // admanager.DestroyBanner();

        }
    }


    private void Update()
    {
        ShowBannerAdonMainMenu();
        RemoveBannerAdonLevelMenu();
    }
    public void LoadtheLevelMenu()
    {
        SceneManager.LoadSceneAsync("LevelMenu");
    }
}
