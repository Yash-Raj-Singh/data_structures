#include<iostream>
using namespace std;

template<class t1=int, class t2=float, class t3=char>
class temp{
public:
t1 a;
t2 b;
t3 c;
temp(t1 a, t2 b, t3 c){
 this->a = a;
 this->b = b;
 this->c = c;
 cout<<this->a<<"\n";
 cout<<this->b<<"\n";
 cout<<this->c<<"\n";
}

};
int main(){
// temp<> c1(23, 2.3, 'b');
temp<int, int, float> c2(22, 11, 4.5);

return 0;
}