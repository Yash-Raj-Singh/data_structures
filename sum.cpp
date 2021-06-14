#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int val, digits, a, sum = 0;
    cin >> val;
    sum = 0;
    digits = (log10(val) + 1);
    for (int i = 0; i < val; i++)
    {
        a = val + (a * (pow(10, digits)));
        sum = sum + a;
    }
    cout << sum;

    return 0;
}
// If you give the input 3 then it will give sum like 3+33+333
// If you give the input 4 then it will give sum like 4+44+444+4444
// If you give the input 7 then it will give sum like 7+77+777+7777+77777+777777+7777777