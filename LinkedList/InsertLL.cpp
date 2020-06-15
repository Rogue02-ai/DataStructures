//Program to create a Linked List by calling a function repeatedly.
// here insert() is called everytime to insert an element at the head of linked list.

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *Next;
}
    *first = NULL;

void insert(int pos, int x)
{
    Node *t, *p;

    if (pos == 0)
    {
        t = new Node();
        t->data = x;
        t->Next = first;
        first = t;
    }

    else if (pos > 0)
    {
        p = first;
        for (int i = 0; i < pos - 1; i++)
        {
            p = p->Next;
        }
        if (p)
        {
            t = new Node();
            t->data = x;
            t->Next = p->Next;
            p->Next = t;
        }
    }
}

void display(Node *p)
{
    while (p != 0)
    {
        cout << p->data << " ";
        p = p->Next;
    }
}

int main()
{

    insert(0, 8);
    insert(1, 3);
    insert(2, 9);
    insert(3, 7);

    display(first);
    return 0;
}
