using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpiderJumper : MonoBehaviour
{
    private Rigidbody2D myrb;
    private Animator myanim;
    [Range(1, 1000)]
    public float startofspawning=170f;
    [Range(1, 1000)]
    public float endofspawning=0f;
    public float forcey;
    private bool isgrounded = true;
    private Gameplay_script gameplay;


    private void Awake()
    {
        myrb = GetComponent<Rigidbody2D>();
        myanim = GetComponent<Animator>();
        gameplay = GameObject.Find("GameplayController").GetComponent<Gameplay_script>();
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (isgrounded)
        {
            StartCoroutine(Attack());
        }
    }

    IEnumerator Attack()
    {
        yield return new WaitForSeconds(Random.Range(startofspawning, endofspawning));
        forcey = Random.Range(100,200);
        myrb.AddForce(new Vector2(0, forcey));
        myanim.SetBool("spider_jumper_attack", true);
        yield return new WaitForSeconds(1f);
        isgrounded = false;
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "Player")
        {
            //Destroy(collision.gameObject);
            gameplay.PlayerDied();

        }


        if (collision.gameObject.tag == "Ground")
        {
            myanim.SetBool("spider_jumper_attack", false);
        }
    }

}
