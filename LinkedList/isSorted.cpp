// Program to check a linked list is Sorted or not.

#include <iostream>
using namespace std;

// defining node class.
class Node
{
public:
    int data;
    Node *next;
} *first = NULL;

// function to create a linked list
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

// function to display the created linked list.
void display(Node *p)
{
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

// function to check linked list is sorted or not.
int isSorted(Node *p)
{
    int x = -65536;
    while (p)
    {
        if (p->data < x)
            return 0;
        x = p->data;
        p = p->next;
    }
    return 1;
}

// driver code.
int main()
{
    int A[] = {10, 20, 30, 44, 40, 50};
    int n = sizeof(A) / sizeof(A[0]);

    create(A, n);

    display(first);

    if (isSorted(first))
    {
        cout << "The list is Sorted";
    }
    else
    {
        cout << "The list is not sorted";
    }

    return 0;
}