// Program to create an array and perform insert function.
// The function is able to insert at the beginning, a given index or at the end of the linked list.

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
} *first = NULL;

// method to create a Linked List.
// an array is passed with its size.
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

// method to display the Linked list.
void display(Node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

// method to count the nodes in a Linked list.
int count(Node *p)
{
    int l = 0;
    while (p)
    {
        l++;
        p = p->next;
    }
    return l;
}

// insert function to insert elements.
void insert(Node *p, int index, int x)
{
    Node *t;
    int i;

    if (index < 0 || index > count(p))
        return;

    t = new Node();
    t->data = x;

    if (index == 0)
    {
        t->next = first;
        first = t;
    }
    else
    {
        for (i = 0; i < index - 1; i++)
            p = p->next;
        t->next = p->next;
        p->next = t;
    }
}

// driver code
int main()
{
    int A[] = {1, 2, 3};
    create(A, 3);

    //inserting at beginning of linked list.
    insert(first, 0, 11);

    //inserting at a specific index.
    insert(first, 2, 55);

    //inserting at the end.
    insert(first, 5, 99);

    display(first);

    return 0;
}