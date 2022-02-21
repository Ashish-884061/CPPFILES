#include <bits/stdc++.h>
using namespace std;
#define N 5

int stack1[100], stack2[100];
int top1 = -1, top2 = -1;
int cnt = 0;

void push1(int data)
{
    if (top1 == N - 1)
    {
        cout << "stack overflow" << endl;
    }
    else
    {
        top1++;
        stack1[top1] = data;
    }
}

int pop1()
{
    int a=0;
    if (top1 == -1)
    {
        cout << "stack overflow" << endl;
    }
    else
    {
        a = stack1[top1];
         top1--;
    }
    return a;
}
void push2(int data)
{
    if (top2 == N - 1)
    {
        cout << "stack overflow" << endl;
    }
    else
    {
        top2++;
        stack2[top2] = data;
    }
}
int pop2()
{
    int b=0;
    if (top2 == -1)
    {
        cout << "stack overflow" << endl;
    }
    else
    {
        b = stack2[top2];
        top2--;
       
    }
     return b;
}
void enqueue(int x)
{
    push1(x);
    cnt++;
}
void dequeue(){
    if(top1 == -1 && top2 == -1){
        cout<<"stack overflow"<<endl;
    }
    else{
        for(int i=0;i<cnt;i++){
            int element = pop1();
            push2(element);
        }
        int b=pop2();
        printf("\nthe dequeue vale is %d",&b);
        printf("\n");
        cnt--;
        for(int i=0;i<cnt;i++){
            int a = pop2();
            push1(a);
        }
    }
}
void display(){
    for(int i=0;i<=top1;i++){
        printf("%d\n",&stack1[i]);
    }
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();
}