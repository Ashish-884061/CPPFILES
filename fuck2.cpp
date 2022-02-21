#include <bits/stdc++.h>
using namespace std;
int main()
{
int T;
cin>>T;
while(T--)
{
    int n,a=1,c=1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr , arr+n);
    for(int i=1;i<n;i++)
    {
        if(arr[i]==arr[i-1])
        {
            c++;
            a=max(a,c);
        }
        else
        {
            c=1;
        }
        if(a==1)
        {
            cout<<"-1"<<endl;
            continue;
        }
        if(a==n)
        {
            cout<<"0"<<endl;
            continue;
        }
        cout<<(n-a)+1<<endl;

    }
}
return 0;
}