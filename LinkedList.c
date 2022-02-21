#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <conio.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

void INSERT_BEGIN (int a)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data=a;
    p->next=head;
    head=p;
}
void INSERT_AFTER_A_VALUE(int value,int value_after_which)
{
    struct node *p = (struct node*)malloc(sizeof(struct node));
    struct node *ptr = head;
    while(ptr->data!=value_after_which)
    {
        ptr=ptr->next;
    }
    p->data=value;
    p->next=ptr->next;
    ptr->next=p;
}
void INSERT_BEFORE_A_VALUE(int value,int value_before_which)
{
    struct node *p = (struct node*)malloc(sizeof(struct node));
    struct node *ptr = head;
    struct node *preptr=ptr;
    while(ptr->data!=value_before_which)
    {
        preptr = ptr;
        ptr=ptr->next;
    }
    p->data=value;
    preptr->next=p;
    p->next=ptr;
}
void INSERT_AT_END(int a)
{
    struct node *p = (struct node*)malloc(sizeof(struct node));
    struct node *ptr = head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    p->data=a;
    ptr->next=p;
    p->next=NULL;
}
void print()
{
    struct node *ptr = head;
    while(ptr->next!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
     printf("%d ",ptr->data);
}
void DELETE_FROM_FIRST()

{
    struct node *p = head;
    head=head->next;
    free(p);
}
void DELETE_FROM_LAST()
{
    struct node *p = head;
    struct node *pre = p;
    while(p->next!=NULL)
    {
        pre= p;
        p=p->next;
    }
    pre->next=NULL;
    free(p);
}
void DELETE_AFTER(int value)
{
    struct node *ptr = head;
    struct node *preptr = ptr;
    while(preptr->data!=value)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=ptr->next;
    free(ptr);

}
int main()
{
    INSERT_BEGIN(2);
    INSERT_BEGIN(23);
    INSERT_BEGIN(44);
    INSERT_BEGIN(45);
    INSERT_BEGIN(747);
    INSERT_AFTER_A_VALUE(42,45);
    INSERT_BEFORE_A_VALUE(12,42);
    INSERT_AT_END(36);
    DELETE_FROM_LAST();
    DELETE_AFTER(12);
    print();
}   