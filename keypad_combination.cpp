#include "bits/stdc++.h"

using namespace std;

string keypad[] = {"",  "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void combo(string s, string ans)
{
    if(s.length() == 0)
    {
        cout<<ans<<" ";
        return;
    }

    char c  = s[0];
    string code = keypad[c-'0'];
    string r = s.substr(1);

    for(int i = 0; i<code.length(); i++)
    {
        combo(r, ans+code[i]);
    }
}

int main()
{
    combo("123","");

    return 0;
}