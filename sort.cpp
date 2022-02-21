#include<bits/stdc++.h>
using namespace std;
int main()
{
 int arr[8]={1,9,4,5,6,7,1,3};
 sort(arr,arr+8);
 for(int i = 0 ;i<8;i++)
 {
     cout<<arr[i]+" ";
 }
 return 0;
}