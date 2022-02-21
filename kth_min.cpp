#include <bits/stdc++.h>
using namespace std;

void sort(int arr[],int N)
{
    int temp = 0;
    for(int i = 0 ; i<N-1 ; i++)
    {
        for(int j = i+1 ; j<N+1 ; j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
}


int main()
{   
    int N;
    cin>>N;
    int arr[N];
    for(int i = 0 ; i<N ; i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    sort(arr,N);
    for(int i = 0 ; i<N ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<arr[k-1];
}