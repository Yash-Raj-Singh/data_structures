#include<iostream>
#include<vector>
using namespace std;

template <class T>
void display(vector <T> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";    // it will display element at ith position
    }
    
}
int main(){
    //Different methods to make vectors
// vector <int> vec1;  //Zero size vector
// int element, size;
// cout<<"Enter the size of vector: ";
// cin>>size;
// for (int i = 0; i < size; i++)
// {
//     cout<<"Enter the element "<<i+1<<" inside the vector ";
//     cin>>element;
//     vec1.push_back(element);
// }
// display(vec1);
// vec1.pop_back();  //Delete an element from the last of the vector
// vector <int> :: iterator itr = vec1.begin();   //Creating a vectorwhich will point to first element
// vec1.insert(itr+1, 4, 45);   //insert element at an index   //second argument will insert 45 4 times inside the vector
// display(vec1);

vector <char> vec2(4);  //character vector of size 4
vec2.push_back('e');

vector <char> vec3(vec2);  //character vector of size 4 from vec2

vector<int> vec4(4, 6);    //4 element vector of 6s
display(vec4);

return 0;
}