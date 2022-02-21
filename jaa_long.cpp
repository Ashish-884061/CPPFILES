#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long N,D;
        cin>>N>>D;
        long ans = 1;

    for(long i = 1 ; i<=D ; i++)
    {
        if(i<=10)
        {
            ans = ans*2;
            if(ans > N)
            {
                ans = N;
            }
        }
        else
        {
            ans = ans*3;
            if(ans>N)
            {
                ans = N;
            }
        }
    }
    cout<<ans<<endl;
    }
    

}