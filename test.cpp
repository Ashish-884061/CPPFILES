#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int A, B, C, D;
        cin >> A >> B >> C >> D;
        if ((A + B + C) == D || (A + B + C) < D)
        {
            cout << 1 << endl;
        }
        else if ((A + B + C) > D && (A + B + C) <= 2 * D)
        {
            cout << 2 << endl;
        }

        else if ((A + B + C) > 2 * D && (A + B + C) <= 3 * D)
        {
            cout << 3 << endl;
        }
    }
    return 0;
}