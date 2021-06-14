#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

void showVector(vector<int> vect){
    vector<int> :: iterator itr;
    for(itr = vect.begin(); itr!=vect.end(); itr++){
        cout<<*itr<<" ";
    }
    cout<<"\n";

}

int main(){
    vector<int> v1;
    v1.push_back(2);
    v1.push_back(4);
    v1.push_back(2);
    v1.push_back(11);
    showVector(v1);

}