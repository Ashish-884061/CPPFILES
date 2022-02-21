#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        getline(cin, s);
        char c = 'C';
        char d = 'D';
        char n = 'N';
        int Oc_c = 0, Oc_d = 0, Oc_n = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == c)
            {
                Oc_c++;
            }
            else if (s[i] == d)
            {
                Oc_d++;
            }
            else if (s[i] == n)
            {
                Oc_n++;
            }
        }
        cout << Oc_c << " " << Oc_d << " " << Oc_n << endl;
    }
    return 0;
}