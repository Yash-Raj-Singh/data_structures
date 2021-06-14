#include<iostream>
using namespace std;
int differenceOfSum(int n,int m){
    int div = 0;
    int noDiv = 0;
    int ans;
for (int i = 1; i <=m; i++)
{
    if(i%n==0){
        div = div+m;
    }
    else{
        noDiv = noDiv+m;
    }
}
ans = noDiv-div;
cout<<ans;

}
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    differenceOfSum(n,m);
}