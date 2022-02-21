#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] < arr[i])
        {
            cout << arr[i] << " ";
        }
        else
        {
            cout << arr[i - 1] << " ";
        }
    }
    return 0;
}
