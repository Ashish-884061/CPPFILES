#include <bits/stdc++.h>
using namespace std;

int main()
{
int T;
cin>>T;
while(T--){
int A,B;
cin>>A>>B;
int count = 1;
int C[A];
int N = (A/2);
int O[N];
int E[N];
for(int i = 0 ; i < A ; i++)
{
    C[i]=count;
    count++;
}
while(B--)
{
for(int i = 0 ; i < N ; i++)
{
    O[i] = C[2*i];
    E[i] = C[(2*i)+1];
}
for (int i = 0; i < N; i++) {
    C[i] = O[i];
    C[i+N] = E[i];
}
}
for (int i = 0; i < A; i++) {
    cout<<C[i]<<" ";
}
cout<<endl;
}
return 0;
}