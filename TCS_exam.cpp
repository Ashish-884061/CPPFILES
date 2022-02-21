#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int Dragon[3],Sloth[3];
        int sumD = 0 , sumS = 0;
        for(int i = 0 ; i<3 ; i++)
        {
            cin>>Dragon[i];
        }
        for(int i = 0 ; i<3 ; i++)
        {
            cin>>Sloth[i];
        }
        if(Dragon[0]==Sloth[0] && Dragon[1] == Sloth[1] && Dragon[2]==Sloth[2])
        {
            cout<<"TIE"<<endl;
        }
        for(int i = 0 ; i<3 ; i++)
        {
            sumD =sumD + Dragon[i];
            sumS = sumS + Sloth[i];
        }
        if(sumD>sumS)
        {
            cout<<"DRAGON"<<endl;
        }
        else if(sumD<sumS)
        {
            cout<<"SLOTH"<<endl;
        }
        else if(sumD == sumS)
        {
            if(Dragon[0] > Sloth[0])
            {
                cout<<"DRAGON"<<endl;
            }
            else if(Dragon[0] < Sloth[0])
            {
                cout<<"SLOTH"<<endl;
            }
            else if(Dragon[0]==Sloth[0])
            {
                if(Dragon[1] > Sloth[1])
                {
                    cout<<"DRAGON"<<endl;
                }
                else if(Dragon[1] < Sloth[1])
                {
                    cout<<"SLOTH"<<endl;
                }
            }
        }

    }
}