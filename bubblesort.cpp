#include<iostream>
using namespace std;
   int comparisons = 0;
    int pass = 1;

void swapping(int &a, int &b) {      
   int temp;
   temp = a;
   a = b;
   b = temp;
   comparisons = comparisons+1;
}
void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}
void bubbleSort(int *array, int size) {
   for(int i = 0; i<size; i++) {
      int swaps = 0;         
      for(int j = 0; j<size-i-1; j++) {
         if(array[j] > array[j+1]) {     
            swapping(array[j], array[j+1]);
            swaps = 1;  

         }
      }
      if(!swaps)
         break;      
         pass = pass+1; 
   }
   
}
int main() {
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];     
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   display(arr, n);
   bubbleSort(arr, n);
   cout << "Array after Sorting: ";
   display(arr, n);
   cout<<"No. of comparisons "<<comparisons<<"\n";
   cout<<"Your array is sorted in "<<pass<<" pass";
}