#include <bits/stdc++.h>
using namespace std;

int findIndex(int arr[], int idx, int K)
{
 
    if (idx < 0)
        return -1;
 
    if (arr[idx] == K) {
        return idx;
    }
 
    return findIndex(arr, idx - 1, K);
}

int power(int a)
{
    a = a-1;
    while((a&a-1)!=0)
    {
        a = a&a-1;
        //cout<<a<<endl;
    }
    return a<<1;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a=0,m=0,ans =0;
        int sum = 0,min=0,c=1;
        cin>>a;
        int arr[a],arr1[a];
        int n = sizeof(arr1)/sizeof(arr1[0]);
        for(int i = 0; i<a;i++)
        {
            cin>>arr[i];
            arr1[i]=arr[i];
            sum = sum + arr[i];
        }
        sort(arr1,arr1+n);
        m = power(sum);
        min = arr1[0];
        sum = sum - min;
        ans = sum;
        c = (m-sum)/min;
        if(c==1)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<"1"<<endl;
            cout<<("1 "+c)<<endl;
            int ind = findIndex(arr,n,min);
            cout<<(ind+1)<<endl;
        }

    }
}