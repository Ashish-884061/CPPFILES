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
      p->data = n;
      p->next = NULL;
      head = p;
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
      insert(20);
      insert(40);
      insert(30);

      print();
}
