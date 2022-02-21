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

void insertafter(int n, int m)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    node *ptr = head;
    while (ptr->data != n)
    {
        ptr = ptr->next;
    }
    p->data = m;
    p->next = ptr->next;
    ptr->next = p;
}
void insert_after(int m, int n)
{
    int count = 1;
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    node *ptr = head;
    while (count < m)
    {
        count++;
        ptr = ptr->next;
    }
    p->data = n;
    p->next = ptr->next;
    ptr->next = p;
}
void Delete(int n)
{
    struct node *p;
    node *ptr = head;
    p = ptr->next;
    if (ptr->data == n)
    {
        head = head->next;
    }
    while (p->data != n)
    {
        ptr = ptr->next;
        p = p->next;
    }
    ptr->next = p->next;
}
void print()
{
    node *ptr;
    ptr = head;
    while (ptr->next != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
    cout << ptr->data;
}
int main()
{

    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insertafter(30, 50);
    insertafter(30, 70);
    insert_after(4, 60);
    Delete(40);
    print();
}
