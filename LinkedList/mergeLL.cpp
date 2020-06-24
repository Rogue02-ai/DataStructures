// Programe to merge two sorted linked list into one sorted list.

#include <iostream>
using namespace std;

// defining node class.
class Node
{
public:
    int data;
    Node *next;
} *first = NULL, *second = NULL, *third = NULL;

// creating first sorted linked list.
void create(int A[], int n)
{
    Node *last, *t;
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

// creating second sorted linked list.
void create2(int A[], int m)
{
    Node *last, *t;
    int i;

    second = new Node();
    second->data = A[0];
    second->next = NULL;
    last = second;

    for (i = 1; i < m; i++)
    {
        t = new Node();
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

// function to display linked list.
void display(Node *p)
{
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

// function to merge the two created linked lists.
void merge(Node *p, Node *q)
{
    Node *last = new Node();
    if (p->data < q->data)
    {
        last = third = p;
        p = p->next;
        third->next = NULL;
    }

    else
    {
        last = third = q;
        q = q->next;
        third->next = NULL;
    }

    while (p != NULL && q != NULL)
    {
        if (p->data < q->data)
        {
            last->next = p;
            last = p;
            p = p->next;
            last->next = NULL;
        }
        else
        {
            last->next = q;
            last = q;
            q = q->next;
            last->next = NULL;
        }
    }
    if (p != NULL)
    {
        last->next = p;
    }
    else
    {
        last->next = q;
    }
}

// driver code.
int main()
{
    int A[] = {2, 4, 5, 8, 11};
    int n = sizeof(A) / sizeof(A[0]);
    int B[] = {1, 3, 9, 10};
    int m = sizeof(B) / sizeof(B[0]);

    create(A, n);
    create2(B, m);

    merge(first, second);

    display(third);

    return 0;
}