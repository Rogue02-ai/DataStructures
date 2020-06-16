#include <iostream>
using namespace std;

class Node
{
    int data;
    Node *next;
} *first = NULL;

void create(int A[], int n)
{
    Node *t, *last;

    first = new Node();
    first->data = A[0];
    first->next = NULL;
    last = first;
}

int main(

    return 0;)