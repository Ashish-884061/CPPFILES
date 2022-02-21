#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {   
        string str;
        cin>>str;
        bool flag = false;
        for(int i = 0 ; i<str.length() ; i++)
        {
            if(str[i]=='1' && (str[i+1]=='1' || str[i+1]=='0'))
            {
                flag = true;
                cout<<"YES"<<endl;
                break;
            }
        }
        if(flag == false)
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}