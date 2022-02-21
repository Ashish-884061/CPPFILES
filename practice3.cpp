#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        int min = INT_MAX;
        cin >> N;
        long long arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + N);
        for (int i = 0; i < N; i++)
        {
            if ((arr[i+1] - arr[i]) < min)
            {
                min = arr[i+1] - arr[i];
            }
        }
        cout << min << endl;
    }
    return 0;
}