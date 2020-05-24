using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BouncyPlatform : MonoBehaviour
{
    public float force = 500f;
    private Animator anim;
    public Player_Script player;

    void Awake()
    {
        anim = GetComponent<Animator>();

    }
    // Start is called before the first frame update

    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    IEnumerator Animatebouncy()
    {
        Debug.Log("Start Bouncing");
        anim.Play("BouncyUp");
        yield return new WaitForSeconds(0.7f);
        anim.Play("BouncyDown");
    }



    private void OnTriggerEnter2D(Collider2D collision)
    {
        
        if (collision.gameObject.tag=="Player")
        {
            
            // collision.gameObject.GetComponent<Player_Script>().bouncetheplayerwithbouncy(force);
            player.bouncyplatformlaunch(force);
            StartCoroutine(Animatebouncy());
        }
    }
}
