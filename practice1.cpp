// Code in C++
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, input, remain, c;
    cin >> t;
    while(t--)
    {
        remain = 0;
        cin >> input;
        c = 5;
        while ((input / c) > 0) 
        {
            remain = remain + (input / c);
            c = c * 5;
        }
        cout << remain << "\n";
    }
}
