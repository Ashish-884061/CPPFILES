#include <bits/stdc++.h>
using namespace std;

void kth_smallest(int arr[], int l ,int r,int k)
{
    int a = min(l,r);
    int b = max(l,r);
    int j = 0;

    int tempArray[b-a+1];
    for(int i = a ; i<=b ; i++)
    {
        arr[j]=tempArray[i];
        j++;
    }
    sort(tempArray,tempArray+b-a+1);
    cout<<tempArray[k]<<endl;;
}

int main()
{
    int arra[]={0,28,4,3,9,7};
    kth_smallest(arra,1,4,2);
}