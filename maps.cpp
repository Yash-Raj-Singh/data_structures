#include<iostream>
#include<map>
#include<string>
using namespace std;
// Map is an associative array used to store key value pairs
int main(){
    map<string, int> map1;
    map1["Keshav"] = 99;
    map1["Aman"] = 75;
    map1["Shyam"] = 82;
    map1["Amit"] = 45;
    map1.insert({"Mohit", 34});
    map1.insert({"Rachit", 50});
    map<string, int> :: iterator itr;
    for (itr = map1.begin(); itr != map1.end(); itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }
    cout<<"Size of the map1 is: "<<map1.size()<<endl;
    cout<<"Maximum Size of the map1 can be: "<<map1.max_size()<<endl;
    cout<<"Does map1 is empty: "<<map1.empty();
    
return 0;
}