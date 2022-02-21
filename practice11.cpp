#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int D,L,R;
        cin>>D>>L>>R;
        if(D<=R)
        {
            if(L<=D)
            {
                cout<<"Take second dose now"<<endl;
            }
            else
            {
                cout<<"Too Early"<<endl;
            }
        }
        else
        {
            cout<<"Too Late"<<endl;
        }
    }
}