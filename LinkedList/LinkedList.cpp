// Program to create a simple linked list and display it.

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

// function to diplay nodes of linked list
void display(Node *p)
{
    while (p != 0)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

// driver code
int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    // allocating data to first node.
    head->data = 1;
    head->next = second;

    // allocating data to second node.
    second->data = 2;
    second->next = third;

    // allocating data to third node.
    third->data = 3;
    third->next = NULL;

    display(head);

    return 0;
}