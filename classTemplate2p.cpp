#include<iostream>
using namespace std;
template <class t1, class t2>
class myClass{
    public:
    t1 data1;
    t2 data2;
    myClass(t1 data1, t2 data2){
      this->data1 = data1;
       this->data2 = data2;
    }
    void display(){
        cout<<this->data1;
        cout<<" ";
        cout<<this->data2;
    }
};

int main(){
 myClass <int, float>c1(22, 2.2);
 c1.display();
return 0;
}