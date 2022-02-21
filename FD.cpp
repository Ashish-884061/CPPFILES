#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N=0,X=0;
        cin>>N>>X;
        int am[N];
        int n = sizeof(am) / sizeof(am[0]);
        int temp = 0;
        int count = 0;
        bool flag = false;
        for(int i = 0 ; i<N ; i++)
        {
            cin>>am[i];
        }
        sort(am, am + n, greater<int>());
        for(int i = 0 ; i<N ; i++)
        {
            temp += am[i];
            if(temp>=X)
            {
                //cout<<i<<endl;
                count = i+1;
                flag = true;
                break;
            }
            //else
            //{
                
            //}

        }
        if(flag == true)
        {
            cout<<count<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
        
    }

}