#include <bits/stdc++.h>
using namespace std;

bool power_of_2(int n)
{
    if((n & (n - 1)) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
    int a;
    cin>>a;
    if(power_of_2(a))
    {
        cout<<log2(a);
    }
    else
    {
        cout<<0;
    }
    }
}