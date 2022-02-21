#include <bits/stdc++.h>
using namespace std;

int queue[5];
int front = -1;
int rear = -1;

void enqueue(int n)
{
    if (rear == 4)
    {
        cout << "FULL" << endl;
    }
    else if (rear == front == -1)
    {
        front = rear = 0;
        queue[rear] = n;
    }
    else
    {
        rear++;
        queue[rear] = n;
    }
}
void display()
{
    if (rear == front == -1)
    {
        cout << "empty" << endl;
    }
    else
    {
        while (front<4)
        {
            cout << queue[front];
            front++;
        }
    }
}
int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    display();
}