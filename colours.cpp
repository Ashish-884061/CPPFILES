#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int no_of_balls;
        cin>>no_of_balls;
        int B1[3]={0},B2[3]={0},B3[3]={0};
        int arr[3]={0};
        int n = sizeof(arr)/sizeof(arr[0]);
        for(int i =0;i<3;i++)
        {
            cin>>B1[i];
        }
        for(int i =0;i<3;i++)
        {
            cin>>B2[i];
        }for(int i =0;i<3;i++)
        {
            cin>>B3[i];
        }
        arr[0]=(no_of_balls-B1[0]);
        arr[1]=(no_of_balls-B2[1]);
        arr[2]=(no_of_balls-B3[2]);
        sort(arr,arr+n);
        cout<<arr[2]<<endl;
    }
}