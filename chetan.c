#include <stdio.h>
#include <conio.h>

int queue[5];
int front = -1;
int rear = -1;

void enqueue(int n)
{
    if (rear == 4)
    {
        printf("Full\n");
    }
    else if (rear == front == -1)
    {
        front == rear == 0;
        queue[rear] = n;
    }
    else
    {
        rear++;
        queue[rear] = n;
    }
}
void peek()
{
    printf("%d", queue[front]);
}
void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("Empty");
    }
    else if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front++;
    }
}
void display()
{
    if (rear == -1 && front == -1)
    {
        printf("Empty");
    }
    else
    {
        for (int i = 0; i <= rear; i++)
        {
            printf("%d\n", queue[i]);
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
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    display();
}