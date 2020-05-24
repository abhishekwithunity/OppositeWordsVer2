using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameControl : MonoBehaviour {

    [SerializeField]
    private GameObject winText;

	// Use this for initialization
	void Start () {
        winText.SetActive(false);
	}
	
	// Update is called once per frame
	void Update () {
        if (Bear_2.locked && Koala.locked && Hare.locked)
            winText.SetActive(true);
    }
}
