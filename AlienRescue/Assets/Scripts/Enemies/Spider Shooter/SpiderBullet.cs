using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpiderBullet : MonoBehaviour
{
    private Gameplay_script gameplay;
    private void Awake()
    {
        gameplay = GameObject.Find("GameplayController").GetComponent<Gameplay_script>();
    }
    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.tag == "Player")
        {
            Destroy(collision.gameObject);
            Destroy(gameObject);
            gameplay.PlayerDied();
        }
        if (collision.gameObject.tag == "Ground")
        {
             
            Destroy(gameObject);

        }
    }
     
}
