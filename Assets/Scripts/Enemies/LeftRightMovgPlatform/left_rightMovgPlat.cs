using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class left_rightMovgPlat : MonoBehaviour
{ 
    public float dirX = 4f;
    public float moveSpeed = 3f;
    bool moveright = true;

    // Update is called once per frame
    void Update()
    {
        if (transform.position.x > dirX)
            moveright = false;
        if (transform.position.x < -dirX)
            moveright = true;

        if (moveright)
            transform.position = new Vector2(transform.position.x + moveSpeed * Time.deltaTime,transform.position.y);
        else
            transform.position = new Vector2(transform.position.x - moveSpeed * Time.deltaTime,transform.position.y);
    }
}
 