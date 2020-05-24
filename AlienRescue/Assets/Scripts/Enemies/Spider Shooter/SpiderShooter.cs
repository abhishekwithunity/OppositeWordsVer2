using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpiderShooter : MonoBehaviour
{
    private Rigidbody2D myrb_spider;
    [SerializeField]
    public GameObject bullet;
    private bool isdestroyed=false;
    [Range(1, 1000)]
    public float startofspawning;
    [Range(1, 1000)]
    public float  endofspawning;
    private Gameplay_script gameplay;
   // public GameObject shootposition;
    // Start is called before the first frame update
    void Start()
    {
       // StartCoroutine(Attack());
       
    }

    // Update is called once per frame
    void Update()
    {
        StartCoroutine(Attack());
        if (!isdestroyed)
        {
          //  
        }
    }
    void Awake()
    {
        gameplay = GameObject.Find("GameplayController").GetComponent<Gameplay_script>();
    }

    IEnumerator Attack()
    {
      yield return new WaitForSeconds(Random.Range(startofspawning, endofspawning));
        Instantiate(bullet, transform.position, Quaternion.identity);
    
    
    }
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.tag=="Player")
        {
            Destroy(collision.gameObject);
            //player = GameObject.Find("Player").GetComponent<Player_Script>();
            gameplay.PlayerDied();
       
        
        }


        if(collision.gameObject.tag=="Ground")
        {
            Destroy(gameObject);
            isdestroyed = true;
           
        }
    }
}
