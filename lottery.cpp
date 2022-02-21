#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, count = 0;
    cin >> T;
    int arr[3];
    while (T--)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < 3; i++)
        {
            if (arr[i] == 7)
            {
                count++;
            }
        }
        if (count > 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        count = 0;
    }
}