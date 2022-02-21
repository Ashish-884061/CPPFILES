#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a;
        int count = 0;
        cin>>a;
        while(a>0)
        {
            if(a%10==4)
            {
                count++;
                a=a/10;
            }
            else
            {
                a=a/10;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}