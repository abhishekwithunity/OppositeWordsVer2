using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RandomNumberGen : MonoBehaviour
{
    [Header("Ran Num between 1 and 40")]
    public int randomnumber;
    [Header("Ran Num between 1 and 40 for the")]


    public int randomnumber2;

    public static RandomNumberGen instance;

    public void Makeinstance()
    {
        if (instance == null)
        {
            instance = this;
        }
    }
    // Start is called before the first frame update
    void Start()
    {
        randomnumber = Random.Range(1,40);
        randomnumber2 = Random.Range(1, 40);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
