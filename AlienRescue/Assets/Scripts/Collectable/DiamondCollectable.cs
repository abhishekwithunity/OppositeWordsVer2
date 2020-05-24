using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DiamondCollectable : MonoBehaviour
{
    [SerializeField]

    private Door door;
   
    // Start is called before the first frame update
    void Start()
    {
        // door.instance.collectiblecount++;
        door.collectiblecount++;
    }

    // Update is called once per frame
    void Update()
    {
        
    }


    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.tag==("Player"))
        {
            StartCoroutine(PlaySound());
            Destroy(gameObject);
            // door.instance.Decrementcollectables();
            door.Decrementcollectables();
           
        }
    }

    IEnumerator PlaySound()
    {
        yield return new WaitForSeconds(10);
       
    }

}
