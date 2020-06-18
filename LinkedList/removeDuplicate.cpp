// Program toremove duplicates from from a sorted linked list.

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

// function to remove duplicates from the sorted linked list.
void removeDuplicates(Node *p)
{
    Node *q = first->next;
    while (q)
    {
        if (p->data != q->data)
        {
            p = q;
            q = q->next;
        }
        else
        {
            p->next = q->next;
            delete q;
            q = p->next;
        }
    }
}

// driver code.
int main()
{
    int A[] = {10, 20, 20, 20, 30, 40, 50};
    int n = sizeof(A) / sizeof(A[0]);

    create(A, n);

    removeDuplicates(first);

    display(first);

    return 0;
}