#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, count1 = 0, count0 = 0, count2 = 0;
    int arr[5];
    cin >> T;
    while (T--)
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < 5; i++)
        {
            if (arr[i] == 0)
            {
                count0++;
            }
            else if (arr[i] == 1)
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }
        if (count1 > count2)
        {
            cout << "INDIA" << endl;
        }
        else if (count1 < count2)
        {
            cout << "ENGLAND" << endl;
        }
        else if (count1 == count2)
        {
            cout << "DRAW" << endl;
        }

        count0 = 0;
        count1 = 0;
        count2 = 0;
    }
    return 0;
}