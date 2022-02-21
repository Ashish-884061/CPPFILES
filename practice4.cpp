#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k=0;
        cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cin >> k;
        int key = arr[k-1];
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == key)
            {
                cout << i+1 << endl;
                break;
            }
        }
    }
    return 0;
}