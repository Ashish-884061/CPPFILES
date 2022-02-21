#include <iostream>
using namespace std;
int main()
{
    int i, j, k;

    cin >> i >> j;
    k = i - j;
    if (k % 10 != 9)
        k++;
    else
        k--;

    cout << k;

    return 0;
}