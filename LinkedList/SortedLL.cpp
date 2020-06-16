// Program to insert an element in a sorted Linked List.

#include <iostream>
using namespace std;

// defining a node.
class Node
{
public:
    int data;
    Node *next;
} *first = NULL;

//method to create a Linked List
void create(int A[], int n)
{
    Node *t, *last;
    int i;

    first = new Node();
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = new Node();
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

//method to display a linked list.
void display(Node *p)
{
    while (p != 0)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

//method to insert an element into the sorted linked list.
void insertSorted(Node *p, int x)
{
    Node *q = NULL;
    Node *t = new Node();
    t->data = x;
    t->next = NULL;

    //edge cases:
    //1. if there are no nodes present in the linked list.
    if (first == NULL)
        first = t;
    else
    {
        while (p != NULL && p->data < x)
        {
            q = p;
            p = p->next;
        }
        //2. if the element to be inserted is smallest among all other.
        if (p == first)
        {
            t->next = first;
            first = t;
        }
        //3. normal case, inserting the element between others.
        else
        {
            t->next = q->next;
            q->next = t;
        }
    }
}

// driver code
int main()
{

    int A[] = {2, 4, 6, 8, 10};
    int n = sizeof(A) / sizeof(A[0]);

    create(A, n);

    insertSorted(first, 12);

    display(first);

    return 0;
}