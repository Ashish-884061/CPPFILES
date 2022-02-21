#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    int prevFact = factorial(n-1);

    return n*prevFact;
}

int main()
{
    cout<<factorial(5);
}