#include <iostream>
#include <array>
using namespace std;
int main(){
std::array<int, 5> arr;
arr = {1,2,3,4,5};
cout<<arr.at(3);
return 0;
}