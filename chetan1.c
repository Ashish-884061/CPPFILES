#include <bits/stdc++.h>
using namespace std;
#define N 5

int stack1[100], satck2[100];
int top1 = -1, top2 = -1;
int count = 0;

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
    if (top1 == -1)
    {
        cout << "stack overflow" << endl;
    }
    else
    {
        int a = stack1[top1] top1--;
        return a;
    }
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
int pop1()
{
    if (top2 == -1)
    {
        cout << "stack overflow" << endl;
    }
    else
    {
        int b = stack2[top2] top2--;
        return b;
    }
}
void enqueue(int x)
{
    push1(x);
    count++;
}
void dequeue(){
    if(top1==-1 && top2=-1){
        cout<<"stack overflow"<<endl;
    }
    else{
        for(int i=0;i<count;i++){
            int element = pop1();
            push2(element);
        }
        int b=pop2();
        printf("\nthe dequeue vale is %d",&b);
        printf("\n");
        count--;
        for(int i=0;i<count;i++){
            int a = pop2();
            push1(a);
        }
    }
}
void display(){
    for(int i=0;i<=top1;i++){
        printf("%d",&stack1[i]);
    }
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
}