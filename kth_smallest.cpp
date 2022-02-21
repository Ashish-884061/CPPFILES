#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

void print(int arr[])
{
    for(int i = 0; i<6 ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
} 

int main()
{
    int arr[]={0,8,5,6,3,9};
    print(arr);
    sort(arr,arr+6);
    sortArray(arr,1,4);
    print(arr);
}
