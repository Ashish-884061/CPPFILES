#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int N, X, req, imdb;
        cin >> N >> X;
        int max = 0;
        for (int i = 0; i < N; i++)
        {
            cin >> req >> imdb;
            if (req <= X && max < imdb)
            {
                max = imdb;
            }
        }
        cout << max << endl;
    }
}