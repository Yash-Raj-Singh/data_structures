#include<iostream>
using namespace std;
int main(){
    int size, value, occ=0;
    cout<<"Enter the size of the array";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element for checking no of occurence";
    cin>>value;
    for(int i=0;i<size;i++){
        if(value==arr[i]){
            occ=occ+1;
        }
    }
        cout<<"occurence = "<<occ;

return 0;
 
}