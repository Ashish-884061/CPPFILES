#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int len;
        int d0,d1;
        cin>>len>>d0>>d1;
        int sum =0;
        int arr[len];
        arr[0]=d0;
        arr[1]=d1;
        sum = d0+d1;
        for(int i = 2 ; i<len ; i++)
        {
            arr[i]=sum%10;
            sum =sum+arr[i];
        }
        for(int i = 0;i<len;i++)
        {
            cout<<arr[i];
        }
        cout<<endl;
        
    }
    return 0;
}