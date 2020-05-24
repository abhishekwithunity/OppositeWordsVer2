using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bucket : MonoBehaviour {

    Rigidbody2D rb;
	
    private Gameplay_script gameplay;// Use this for initialization
	void Start () {
		rb = GetComponent<Rigidbody2D> ();
        gameplay = GameObject.Find("GameplayController").GetComponent<Gameplay_script>();
    }
	
	void OnTriggerEnter2D (Collider2D col)
	{
		if (col.gameObject.name.Equals ("Player"))
			rb.isKinematic = false;
	}

	void OnCollisionEnter2D (Collision2D col)
	{
        gameplay.PlayerDied();
			
	}





}
