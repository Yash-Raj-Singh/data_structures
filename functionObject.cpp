#include<iostream>
#include<functional>
#include<algorithm>
#include<array>
using namespace std;
int main(){
// Function Object (Functor) : Functions are wrapped inside a class so that they will be available like an object
array<int, 7> arr{1,54,67,0,76,-1,4};
sort(arr.begin(), arr.end());                   //Sort in ascending order
sort(arr.begin(), arr.end(), greater<int>());    //Sort in descending order
for (int i = 0; i < 7; i++)
{
    // cout<<arr.size();
    cout<<arr[i]<<endl;
}

return 0;
}