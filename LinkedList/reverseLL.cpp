// Program to reverse a linked list.
// We have used the concept of sliding pointers.
// pointer r follows pointer q which follows pointer p.

#include <iostream>
using namespace std;

// creating node class
class Node
{
public:
    int data;
    Node *next;
} *first = NULL;

// function to create linked list
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

// function to display linked list
void display(Node *p)
{
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

// function to reverse linked list.
void reverse(Node *p)
{

    Node *q = NULL, *r = NULL;
    while (p)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}

// driver code.
int main()
{
    int A[] = {10, 2, 30, 4, 55, 33};
    int n = sizeof(A) / sizeof(A[0]);

    create(A, n);

    reverse(first);

    display(first);

    return 0;
}