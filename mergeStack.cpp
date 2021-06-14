#include<iostream>
#include<stack>
// #include<bits/stdc++.h> 
using namespace std;
void Merge(stack<int>& s1, stack<int>& s2) 
{ 
    
    stack<int> mergedStack; 
    while (!s1.empty()) { 
        mergedStack.push(s1.top()); 
        s1.pop(); 
    } 
    while (!s2.empty()) { 
        mergedStack.push(s2.top()); 
        s2.pop(); 
    } 
  
     while (!mergedStack.empty()) { 
        cout << mergedStack.top() << " "; 
        mergedStack.pop(); 
  
    }
} 

  void input(stack<int>& s){
      int n, val;
      cin>>n;
      for(int i=0;i<n;i++){
          cout<<"Enter value" <<i+1<<" : ";
          cin>>val;
        s.push(val); 

      }

  }
int main() 
{ 
        stack<int> s1;
        stack<int> s2;
     cout<<"Enter the no of elements in First stack : ";
      input(s1);
     cout<<"Enter the no of elements in Second stack : ";
      input(s2);
         cout<<"Merged Stack : ";
      Merge(s1, s2);
    }