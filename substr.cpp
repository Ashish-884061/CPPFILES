#include<bits/stdc++.h>
using namespace std;

int subsequences(string str,string output[])
{
    if(str.length()==0)
    {
        output[0]="";
        return 1;
    }

    long smallerOutputSize = subsequences(str.substr(1),output);

    for(long i=0 ; i<smallerOutputSize ; i++)
    {
        output[i+smallerOutputSize]=str[0]+output[i];
    }
    return 2*smallerOutputSize;
}

int main()
{
    string output[1000];
    long count = 0;
    long T;
    cin>>T;
    while(T--)
    {
        string input;
        cin>>input;
        long outputSize = subsequences(input,output);

    for(long i = 0 ; i<outputSize ; i++)
    {
       if(output[i]=="10" || output[i] == "11")
       {
           count++;
       }
    }
    if(count > 0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    count = 0;
    }
    return 0;
}

