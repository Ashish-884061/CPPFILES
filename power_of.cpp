#include<bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n)
{
    if (n == 0)
        return 0;
    while (n != 1)
    {
        if (n%2 != 0)
            return 0;
        n = n/2;
    }
    return 1;
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n];
        int sum =0;
        for(int i =0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i =0;i<n;i++)
        {
            sum += arr[i];
        }
        if(isPowerOfTwo(sum))
        {
            cout<<"0";
        }
        else
        {
            for(int i = 0 ; i)
        }
    }
}