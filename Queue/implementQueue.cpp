#include <iostream>
using namespace std;

class Queue
{
private:
    int front;
    int rear;
    int size;
    int *Q;

public:
    Queue()
    {
        front = rear = -1;
        size = 10;
        Q = new int[size];
    }

    Queue(int size)
    {
        front = rear = -1;
        this->size = size;
        Q = new int[this->size];
    }

    void enqueue(int x)
    {
        if (rear == size - 1)
        {
            cout << "Queue is full";
        }
        else
        {
            rear++;
            Q[rear] = x;
        }
    }
    int dequeue()
    {
        int x = -1;
        if (front == rear)
        {
            cout << "Queue is empty";
        }
        else
        {
            x = Q[front + 1];
            front++;
        }
        return x;
    }
    void display()
    {
        for (int i = front + 1; i <= rear; i++)
        {
            cout << Q[i];
            cout << " ";
        }
        cout << "\n";
    }
};

int main()
{
    Queue q(5);
    q.enqueue(7);
    q.enqueue(2);
    q.enqueue(9);
    q.display();

    q.dequeue();
    q.display();

    return 0;
}