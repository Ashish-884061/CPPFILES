#include <bits/stdc++.h>

using namespace std;

int main()
{
    string Alice = "Alice";
    string Bob = "Bob";
    string Cindy = "Cindy";
    string Dani = "Dani";
    int countA=0,countB=0,countC=0,countD=0;
    string arr[3];
    for(int i=0;i<=2;i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0;i<=2;i++)
    {
        if(arr[i]==Alice)
        {
            countA++;
        }
        else if(arr[i]==Bob)
        {
            countB++;
        }
        else if(arr[i]==Cindy)
        {
            countC++;
        }
        else if(arr[i]==Dani)
        {
            countD++;
        }
    }
    if(countA==0)
    {
        cout<<Alice;
    }
    else if(countB==0)
    {
        cout<<Bob;
    }
    else if(countC==0)
    {
        cout<<Cindy;
    }
    else if(countD==0)
    {
        cout<<Dani;
    }
    
    return 0;
}