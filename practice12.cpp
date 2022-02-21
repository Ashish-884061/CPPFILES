#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int U, V, A, S;
        cin >> U >> V >> A >> S;
        if (U * U - 2 * A * S <= V * V)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}