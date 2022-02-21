#include <iostream>
using namespace std;
int main()
{
    int n, m, key,count=0;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == key)
            {
                count++;
            }
        }
    }
    if (count >= 1)
    {
        cout << "Element found";
    }
    else
    {
        cout << "Element not found";
    }
}
