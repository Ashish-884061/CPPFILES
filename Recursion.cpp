#include <bits/stdc++.h>
using namespace std;

int Sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    int prev = Sum(n-1);

    return n+prev;
}

int main()
{
    cout<<Sum(50)<<endl;
}