// Program to perform  a linear search in an unsorted linked list.

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
} *first = NULL;

// creation of linked list.
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

//display the created linked list
void display(Node *p)
{
    while (p != 0)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

// function to search for the key in the linked list.
Node *search(Node *p, int key)
{
    while (p != NULL)
    {
        if (p->data == key)
            return p;

        p = p->next;
    }
    return NULL;
}

int main()
{
    Node *temp;
    int A[] = {1, 7, 8, 2, 4, 9};
    int n = sizeof(A) / sizeof(A[0]);

    create(A, n);

    //display(first);

    temp = search(first, 8);
    cout << temp->data << " Element found ";
    return 0;
}