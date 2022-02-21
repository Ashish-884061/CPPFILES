#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

void insert(int a)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
    {
        p->data = a;
        p->next = head;
        head = p;
    }
    else
    {
        struct node *ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        p->data = a;
        ptr->next = p;
        p->next = NULL;
    }
}

/*void print()
{
    struct node *ptr = head;
    while (ptr->next != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << ptr->data;
}

/*int largestElement(struct node *head)
{
    // Declare a max variable and initialize
    // it with INT_MIN value.
    // INT_MIN is integer type and its value
    // is -32767 or less.
    int max = INT_MIN;

    // Check loop while head not equal to NULL
    while (head != NULL)
    {

        // If max is less then head->data then
        // assign value of head->data to max
        // otherwise node point to next node.
        if (max < head->data)
            max = head->data;
        head = head->next;
    }
    return max;
}
*/
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int k = n+1;
        int index = 1;
        int count = 0;
        while (n--)
        {
            int a;
            cin >> a;
            insert(a);
        }
        struct node *ptr = head;
        while (ptr->next != NULL)
        {
            if (ptr->data == index)
            {
                insert(k);
                count++;
                index++;
            }
            index++;
            ptr = ptr->next;
        }
        if (ptr->data == index)
            {
                insert(k);
                count++;
                index++;
            }
        cout << count << endl;
        head = NULL;
    }
}
