using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenuController : MonoBehaviour
{
    

    private void Awake()
    {
        
    }

    // Start is called before the first frame update
    void Start()
    {
        AdManager.Instance.ShowBanner();
        
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
