#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int maxLcmOfPairs(int arr[], int n)
{
    int maxLCM = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            maxLCM = max(maxLCM, (arr[i] * arr[j]) / __gcd(arr[i], arr[j]));
        }
    }

    return maxLCM;
}

int minLCM(int arr[], int n)
{
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {

            int g = gcd(arr[i], arr[j]);
            int lcm = arr[i] / g * arr[j];
            ans = min(ans, lcm);
        }
    }

    return ans;
}

int main()
{
    int x, k;
    cin >> x >> k;
    int z = x * k;
    int arr[z];
    for(int i=0;i<z;i++)
    {
        arr[i]=x;
        x=x+1;
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << minLCM(arr, n) << endl;
    cout << minLCM(arr, n) << endl;
    return 0;
}
