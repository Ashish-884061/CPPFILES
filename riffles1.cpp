#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        ll N,K;
        cin>>N>>K;
        ll arr[N];
        ll H = N/2;
        ll O[H];
    for (ll i = 0; i < N; i++)
    {
        arr[i] = i+1;
    }
    while(K--){
    for(ll i = 0 ; i<H ; i++)
    {
        O[i]=arr[(2*i)+1];
    }
    for(ll i = 0 ; i<N ; i++)
    {
        arr[i]= arr[2*i];
    }
    for(ll i = 0 ; i<H ;i++)
    {
        arr[i+H] = O[i];
    }
    }
    for(ll i = 0 ; i<N ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    }
}