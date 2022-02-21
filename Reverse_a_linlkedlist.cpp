#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

void insert(int n)
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

void reverse()

void print()
{
    struct node *ptr = head;
    while (ptr->next != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << ptr->data << " ";
}

int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    print();
    return 0;
}