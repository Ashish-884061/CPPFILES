#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void insert_Last(int n)
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
void insert_after(int n, int m)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
    {
        p->data = m;
        p->next = NULL;
        head = p;
    }
    else
    {
        node *ptr = head;
        while (ptr->data != n)
        {
            ptr = ptr->next;
        }
        p->data = n;
        p->next = ptr->next;
        ptr = p;
    }
}
void print()
{
    node *ptr = head;
    while (ptr->next != NULL)
    {
        cout << ptr->data << endl;
    }
    cout << ptr->data << endl;
}
int main()
{
    insert_Last(10);
    insert_Last(20);
    insert_Last(30);

    print();
    return 0;
}