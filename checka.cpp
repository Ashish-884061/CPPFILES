#include <bits/stdc++.h>
#include <string>
using namespace std;

int count(string s, char c)
{
    int res = 0;

    for (int i = 0; i < s.length(); i++)

        if (s[i] == c)
            res++;

    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        getline(cin, str);
        char D = 'D';
        char N = 'N';
        char C = 'C';
        int Oc_C = count(str, C);
        int Oc_N = count(str, N);
        int Oc_D = count(str, D);
        cout << Oc_C << " " << Oc_N << " " << Oc_D;
    }
}
