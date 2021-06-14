#include<iostream>
using namespace std;

    template <class x> 
    void f1(x a, x b){
      if(a>b){
          cout<< a <<" is larger than "<<b;
      }
      else
      {
          cout<< b <<" is larger than "<<a;
      }
      
    }
int main(){
      f1(5.2, 5.5);
      return 0;
}