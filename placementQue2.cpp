#include <iostream>
#include <string.h>

using namespace std;
char *upd(char *c)
{
 char *ch = c;

    int i = 7;
    // while (*ch != '\0')
    // {
    //     // if (*ch == ' '||*ch != '\0')
        // {
            for (int j = 0; j < i; j++)
            {
                c[j] = c[j] + i;
                cout<<ch[j]<<endl;
            }
            // i = 0;
            // break;
        // }
        // i++;
        // ch++;
    // }
    return c;
};

int main()
{
    char str1[200];
    char str2[200];
    cin.getline(str1, 200);
    cout << upd(str1);
    return 0;
}