using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenuController : MonoBehaviour
{
    

    private void Awake()
    {
        AdManager.Instance.ShowBanner();
    }

    // Start is called before the first frame update
    void Start()
    {
        AdManager.Instance.ShowBanner();
        
    }
    public void ShowBannerAdonMainMenu()
    {
         
    }

    public void RemoveBannerAdonLevelMenu()
    {
        
    }


    private void Update()
    {
        
    }
    public void LoadtheLevelMenu()
    {
       AdManager.Instance.ShowBanner();
        SceneManager.LoadSceneAsync("LevelMenu");
    }
}
