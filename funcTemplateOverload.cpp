#include<iostream>
using namespace std;

// template <class t>
// class cls{
//     public:
//     t a;
//     cls(t val){
//         a = val;
//     }
//  void display();
// };

void func(int a){
    cout<<"This is simple function "<<a<<endl;
}
template <class t>
void func(t a){
    cout<<"This is templatized function "<<a<<endl;
 }
// template <class t>
// void cls<t>:: display(){
//   cout<<a;
// }
int main(){
// cls <int>c1(5);
// c1.display();
func(4);
func(5.5);
return 0;
}