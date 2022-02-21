#include <bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *newNode(int data)
{
    struct node *p = (struct node*)malloc(sizeof(struct node));
    p->data=data;
    p->left=NULL;
    p->right=NULL;
}

int main()
{
    struct node *root = newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    
}