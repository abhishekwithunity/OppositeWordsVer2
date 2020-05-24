﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Koala : MonoBehaviour {

    [SerializeField]
    private Transform koalaPlace;

    private Vector2 initialPosition;

    private Vector2 mousePosition;

    private float deltaX, deltaY;

    public static bool locked;

    // Use this for initialization
    private void Start()
    {
        initialPosition = transform.position;
    }

    //private void OnMouseDown()
    //{
    //    if (!locked)
    //    {
    //        deltaX = Camera.main.ScreenToWorldPoint(Input.mousePosition).x - transform.position.x;
    //        deltaY = Camera.main.ScreenToWorldPoint(Input.mousePosition).y - transform.position.y;
    //    }
    //}

    //private void OnMouseDrag()
    //{
    //    if (!locked)
    //    {
    //        mousePosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
    //        transform.position = new Vector2(mousePosition.x - deltaX, mousePosition.y - deltaY);
    //    }
    //}

    //private void OnMouseUp()
    //{
    //    if (Mathf.Abs(transform.position.x - koalaPlace.position.x) <= 0.5f &&
    //        Mathf.Abs(transform.position.y - koalaPlace.position.y) <= 0.5f)
    //    {
    //        transform.position = new Vector2(koalaPlace.position.x, koalaPlace.position.y);
    //        locked = true;
    //    }
    //    else
    //    {
    //        transform.position = new Vector2(initialPosition.x, initialPosition.y);
    //    }
    //}

    private void Update()
    {
        if (Input.touchCount > 0 && !locked)
        {
            Touch touch = Input.GetTouch(0);
            Vector2 touchPos = Camera.main.ScreenToWorldPoint(touch.position);

            switch (touch.phase)
            {
                case TouchPhase.Began:
                    if (GetComponent<Collider2D>() == Physics2D.OverlapPoint(touchPos))
                    {
                        deltaX = touchPos.x - transform.position.x;
                        deltaY = touchPos.y - transform.position.y;
                    }
                    break;

                case TouchPhase.Moved:
                    if (GetComponent<Collider2D>() == Physics2D.OverlapPoint(touchPos))
                        transform.position = new Vector2(touchPos.x - deltaX, touchPos.y - deltaY);
                    break;

                case TouchPhase.Ended:
                    if (Mathf.Abs(transform.position.x - koalaPlace.position.x) <= 0.5f &&
                        Mathf.Abs(transform.position.y - koalaPlace.position.y) <= 0.5f)
                    {
                        transform.position = new Vector2(koalaPlace.position.x, koalaPlace.position.y);
                        locked = true;
                    }
                    else
                    {
                        transform.position = new Vector2(initialPosition.x, initialPosition.y);
                    }
                    break;
            }
        }
    }
}