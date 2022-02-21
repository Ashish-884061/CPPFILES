#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int player1[t];
    int player2[t];
    int max1=0,max2=0;
    for(int i =0;i<t;i++)
    {
        cin>>player1[i];
        cin>>player2[i];
    }
    for(int i = 0 ;i<t;i++)
    {
        if(player1[i]>player2[i])
        {
            int diff = player1[i]-player2[i];
            if(max1<diff)
            {
                max1=diff;
            }
        }
        else if(player1[i]<player2[i])
        {
            int diff = player2[i]-player1[i];
            if(max2<diff)
            {
                max2=diff;
            }
        }
    }
    if(max1>max2)
    {
        cout<<"1"<<" "<<max1<<endl;
    }
    else if(max2>max1)
    {
        cout<<"2"<<" "<<max2<<endl;
    }
}