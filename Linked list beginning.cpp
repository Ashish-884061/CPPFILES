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
         node*ptr=head;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        p->data = n;
        p->next = NULL;
        ptr->next=p;     
    }
}
void insertafter(int n, int m)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    
        struct node *ptr = head;
        while (ptr->data != n)
        {
            ptr = ptr->next;
        }
        p->data = m;
        p->next = ptr->next;
        ptr->next = p;
    }

void print()
{
    node *q = head;
    while (q->next != NULL)
    {
        q = q->next;
        cout << q->data << endl;
    }
    cout << q->data;
}
int main()
{
    insert(10);
    insert(20);
    insert(30);
     print();
}