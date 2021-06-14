#include<iostream>
using namespace std;
template <class T>
class vector{
    public:
    T *arr;
    int size;
    vector(int size){
       this->size = size;
        arr = new T(size);
    }
    void takeArray(vector &v){
        cout<<"Enter the array Elements : \n";
        for(int i = 0;i<size;i++){
            cin>>v.arr[i];
        }
    }
    void displayArray(vector &v){
        cout<<"Your array is : ";
        for(int i = 0;i<size;i++){
            cout<<v.arr[i]<<" ";
        }
    }
};
int main(){
    vector <char>v1(4);
    v1.takeArray(v1);
    v1.displayArray(v1);

}