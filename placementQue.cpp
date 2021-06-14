#include <iostream>
#include <math.h>
using namespace std;
int key(int i1, int i2, int i3){
    int once = 0;
    int ans = 0;
for(int i = 0; i<4; i++){
    int x1 = i1%10;
    int x2 = i2%10;
    int x3 = i3%10;
    if((x1 <= x2) && (x1 <= x3))
        once = x1;
    else if ((x2 <= x1) && (x2 <= x3))
    once = x2;
    else  {once = x3;}
        int m = pow(10, i);
        ans = (once*m)+ans;
        i1 = i1/10;
        i2 = i2/10;
        i3 = i3/10;
        // ans = once*m;
    
}
        return ans;
};
int main(){
    int i1;
    int i2;
    int i3;
    cin>>i1>>i2>>i3;
    int x = key(i1, i2, i3);
    cout<<x;
}