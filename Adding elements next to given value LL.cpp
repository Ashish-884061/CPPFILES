#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void insertFirst(int n)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = n;
    p->next = head;
    head = p;
}
void insertLast(int n)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
    {
        p->data = n;
        p->next = NULL;
        head = p;
    }
    else
    {
        node *ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        p->data = n;
        p->next = NULL;
        ptr->next = p;
    }
}
void print()
{
    node *ptr = head;
    while (ptr->next != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
    cout << ptr->data;
}
int main()
{

    insertLast(10);
    insertLast(20);
    insertLast(30);
    insertFirst(40);
    insertFirst(50);
    insertFirst(60);

    print();
}
