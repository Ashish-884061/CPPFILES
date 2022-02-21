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
        for(int i =0;i<3;i++)
        {
            cin>>B1[i];
        }
        for(int i =0;i<3;i++)
        {
            cin>>B2[i];
        }
        for(int i =0;i<3;i++)
        {
            cin>>B3[i];
        }
        int Red[3]={B1[0],B2[0],B3[0]};
        int Green[3]={B1[1],B2[1],B3[1]};
        int Blue[3]={B1[2],B2[2],B3[2]};
        int n = sizeof(Red)/sizeof(Red[0]);
        sort(Red,Red+n);
        sort(Green,Green+n);
        sort(Blue,Blue+n);
        int max[3] = {Red[2],Green[2],Blue[2]};
        sort(max,max+n);
        cout<<no_of_balls-max[0]<<endl;
    }
}