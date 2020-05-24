using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class autodestroy : MonoBehaviour
{
    [Header("Time it will take to destroy from screen")]
    public float timetodestroyafter;
	

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        StartCoroutine(destroyitinsec(timetodestroyafter));    
    }

    IEnumerator destroyitinsec(float time)
    {
        //do something 
        yield return new WaitForSeconds(time);
        Destroy(gameObject);
        //wait 

        //do this 
    }

}
