// This program will create a linked list using an Array.
// favorable method to create alinked list as we do not have to call a function repeatedly.

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
} *first = NULL;

// create method.
void create(int A[], int n)
{

    int i;
    Node *t, *last;
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

// displaying the linked list.
void display(Node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

//driver code
int main()
{
    int A[] = {1, 5, 7, 8, 9, 5, 1, 2, 3};
    create(A, 8);

    display(first);

    return 0;
}