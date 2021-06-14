#include <iostream>
#include <list>
// #include <iterator>
using namespace std;

void showList(list <int> lst){
list <int> :: iterator itr;
for(itr = lst.begin(); itr!=lst.end(); itr++){
    cout<<*itr;
}
cout<<"\n";
}

int main(){
    list <int> l;
    list <int> l2;
list <int> :: iterator itr2;
itr2 = l.begin();
itr2 = itr2++;
    for (int i =0; i<10; i++){
        l.push_back(i);
        l2.push_front(i);
    }
    // showList(l2);
    // l.pop_front();
    // showList(l);
    // l2.pop_back();
    // showList(l2);
    // l2.reverse();
    // showList(l2);
    // l2.reverse();
    // l2.sort();
    // showList(l2);
    l.push_front(5);
    l.push_front(4);
    l.push_front(5);
    // l.erase(itr2);
    l.remove(5);
    showList(l);
}