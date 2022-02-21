#include <bits/stdc++.h>
using namespace std;

void reverse(string input)
{
    int i = input.length();
    for(int j = i-1 ; j>=0 ; j--)
    {
        cout<<input[j];
    }
}

int main()
{
    string input;
    cin>>input;
    reverse(input);
}