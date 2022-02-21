#include <iostream>
#include <stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void insert(int n)
{
    struct node *p = head;
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
int main()
{
    insert(10);
    insert(20);
    insert(30);
    
    node *ptr = head;
    while (ptr->next != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
    cout << ptr->data;
}
