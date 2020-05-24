using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DragandDrop : MonoBehaviour
{

  //  public Transform EmptyPlace1;
  //  public Transform EmptyPlace2;

    [SerializeField]
    private Transform DropPosition;


    private Vector2 initialPosition;


    private Vector2 mousePosition;

    private float deltaX, deltaY;

    public static bool locked=false;
    public static DragandDrop instance;
    public void Makeinstance()
    {
        if (instance == null)
        {
            instance = this;
        }
    }


    // Use this for initialization
    private void Start()
    {
        initialPosition = transform.position;
       // EmptyPlace1 = GameObject.Find("EmptyPlace1").transform;
       // EmptyPlace2 = GameObject.Find("EmptyPlace2").transform;


    }

    private void OnMouseDown()
    {
        Debug.Log("Mouse Clicked");
        if (!locked)
        {
            deltaX = Camera.main.ScreenToWorldPoint(Input.mousePosition).x - transform.position.x;
            deltaY = Camera.main.ScreenToWorldPoint(Input.mousePosition).y - transform.position.y;
        }
    }

    private void OnMouseDrag()
    {
        Debug.Log("Mouse Clicked1");
        if (!locked)
        {
            mousePosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
            transform.position = new Vector2(mousePosition.x - deltaX, mousePosition.y - deltaY);
        }
    }

    private void OnMouseUp()
    {
        Debug.Log("Mouse Clicked3");
        if (Mathf.Abs(transform.position.x - DropPosition.position.x) <= 0.5f &&
            Mathf.Abs(transform.position.y - DropPosition.position.y) <= 0.5f)
        {
            transform.position = new Vector2(DropPosition.position.x, DropPosition.position.y);
            locked = true;
        }
        else
        {
            transform.position = new Vector2(initialPosition.x, initialPosition.y);
        }
    }
}