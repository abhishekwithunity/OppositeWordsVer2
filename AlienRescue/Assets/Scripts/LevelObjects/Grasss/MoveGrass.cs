using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveGrass : MonoBehaviour
{
    private Player_Script player;
    private Animator myanim;
    public GameObject hitbranchfx;
    // Start is called before the first frame update
    void Start()
    {
        player = GameObject.Find("Player").GetComponent<Player_Script>();
       // hitbranchfx = GetComponent<AudioSource>();
        myanim = GetComponent<Animator>();
    }


    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "Player")
        {
            StartCoroutine(PlaySoundhitbranchfx());
            myanim.SetBool("TouchbyPlayer", true);

             }
    }

    IEnumerator PlaySoundhitbranchfx()
    {
        hitbranchfx.SetActive(true);
        yield return new WaitForSeconds(0.5f);
        hitbranchfx.SetActive(false);
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "Player")
        {
            myanim.SetBool("TouchbyPlayer", false);

        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
