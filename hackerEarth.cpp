#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int count = 0, tests;
    cin>>tests;
    for (int i = 0; i < tests; i++)
    {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] + 1 == s[i + 1])
            {
                count++;
            }
        }
        if (count == (s.length()-1))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}