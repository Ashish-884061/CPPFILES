#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int Max_Balls;
        cin>>Max_Balls;
        int arr[3][3];
        for(int i = 0 ; i<3;i++)
        {
            for(int j = 0 ; j<3 ; j++)
            {
                cin>>arr[i][j];
            }
        }
        if(arr[0][0]==Max_Balls && arr[1][1]==Max_Balls &&  arr[2][2]==Max_Balls)
        {
            cout<<"0"<<endl;
        }
        else
        {
            int lower = arr[1][0]+arr[2][0]+arr[2][1];
            int upper = arr[0][1]+arr[0][2]+arr[1][2];
            int sup = max(lower,upper);
            cout<<sup<<endl;
        }
    }
}