#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, D, q, r, s;
        int p = 1;
        cin >> N >> D;
        if(N<D)
        {
            cout<<N;
        }
        if (D <= 10)
        {
            for (int t = D; t >= 1; t--)
            {
                p = 2 * p;
            }
        }
        else
        {
            for (int t = 1; t <= 10; t++)
            {
                r = 1;
                r = 2 * r;
            }
            
            for (int u = 11; u <= D; u++)
            {
                q = r;
                q = 3 * q;
            }
        }
        if (D <= 10)
        {
            if(p<=N){
                cout<<N<<endl;
            }
            else
            cout << p << endl;
        }
        else
        {
            if(p<=N){
                cout<<N<<endl;
            }
            else
            cout << r + q << endl;
        }
    }
    return 0;
}