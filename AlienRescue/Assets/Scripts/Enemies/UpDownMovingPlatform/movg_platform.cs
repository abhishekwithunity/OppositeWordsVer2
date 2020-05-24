using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class movg_platform : MonoBehaviour
{
    public float dirY;// = 4f;
    public float moveSpeed;// = 3f;
    bool moveUp = true;

    // Update is called once per frame
    void Update()
    {
        if (transform.position.y > dirY)
            moveUp = false;
        if (transform.position.y < -dirY)
            moveUp = true;

        if (moveUp)
            transform.position = new Vector2(transform.position.x,transform.position.y + moveSpeed * Time.deltaTime);
        else
            transform.position = new Vector2(transform.position.x, transform.position.y - moveSpeed * Time.deltaTime);
    }
}
