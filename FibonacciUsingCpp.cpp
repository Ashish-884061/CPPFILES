#include<bits/stdc++.h>
using namespace std;
int fibon(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    return fibon(n-1)+fibon(n-2);
}
int main()
{
  for(int i =0;i<7;i++)
   cout<<fibon(i)<<" ";
 return 0;
}