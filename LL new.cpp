#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

void insert(int n, int m)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    if (head == NULL && p->data!=n)
    {
        p->data = m;
        p->next = NULL;
        head = p;
    }
    else
    {
        node *ptr;
        while (ptr->data != n)
        {
            ptr = ptr->next;
        }
        p->data = m;
        p->next = ptr;
        ptr = p;
    }
}

void print()
{
    node *ptr;
    while (ptr->next != NULL)
    {
        cout << ptr->data << endl;
    }
    cout << ptr->data;
}

int main()
{
    insert(0,2);
    print();
}