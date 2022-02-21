#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};
struct node* HEAD=NULL;

void Insert(int a)
{
    struct node * p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=a;
    p->next=HEAD;
    HEAD=p;
}
void print()
{
    struct node *ptr = HEAD;
    while(ptr->next!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    printf("%d\n",ptr->data);
}
void InsertLast(int a)
{
    struct node *p=(struct node*)malloc(sizeof(struct node));
    struct node* ptr = HEAD;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    p->data=a;
    ptr->next=p;
    p->next=NULL;
}
void Insert_After_a_value(int value_to_insert,int value_after)
{
    struct node*p=(struct node*)malloc(sizeof(struct node));
    struct node * ptr = HEAD;
    while(ptr->data!=value_after)
    {
        ptr=ptr->next;
    }
    p->data=value_to_insert;
    p->next=ptr->next;
    ptr->next=p;
}
void delete_begin()
{
    HEAD=HEAD->next;
}
void delete_last()
{
    struct node*p=HEAD;
    struct node*ptr=HEAD->next;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
        p=p->next;
    }
    p->next=NULL;
    free(ptr);
}
void delete_direct(int value_to_be_deleted)
{
    struct node*p=HEAD;
    struct node*ptr=HEAD->next;
    if(p->data==value_to_be_deleted)
    {
        HEAD=ptr;
    }
    else
    {
    while(ptr->data!=value_to_be_deleted)
    {
        ptr=ptr->next;
        p=p->next;
    }
    p->next=ptr->next;
    }
}
int main()
{
    Insert(10);
    Insert(50);
    Insert(78);
    Insert(70);
    InsertLast(20);
    Insert_After_a_value(55,20);
    delete_begin();
    delete_last();
    delete_direct(78);
    print();

    return 0;
}