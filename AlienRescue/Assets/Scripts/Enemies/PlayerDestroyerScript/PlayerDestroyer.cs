using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerDestroyer : MonoBehaviour
{
    private Gameplay_script gameplay;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    private void Awake()
    {
        gameplay = GameObject.Find("GameplayController").GetComponent<Gameplay_script>();
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "Player")
        {
            //Destroy(collision.gameObject);
            //player = GameObject.Find("Player").GetComponent<Player_Script>();
            gameplay.PlayerDied();


        }
    }




}
