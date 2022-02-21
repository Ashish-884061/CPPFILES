#include <bits/stdc++.h>
using namespace std;
void increment(int *a)
{
    *a = *a + 1;
}
int main()
{
    int a = 4;
    int *ptr = &a;
    increment(ptr);
    cout << a << endl;
}