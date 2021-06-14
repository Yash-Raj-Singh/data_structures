#include<iostream>
#include<stack>
#include<bits/stdc++.h> 
using namespace std; 
  
//This function will return precedence of operators 
int prec(char c) 
{ 
    if(c == '^') 
    return 3; 
    else if(c == '*' || c == '/') 
    return 2; 
    else if(c == '+' || c == '-') 
    return 1; 
    else
    return -1; 
} 
  
void infixToPostfix(string s) 
{ 
    stack<char> st; 
    st.push('N'); 
    int l = s.length(); 
    string s2; 
    for(int i = 0; i < l; i++) 
    { 
        if((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z')) 
        s2+=s[i]; 
  
        else if(s[i] == '(') 
          
        st.push('('); 
          
        else if(s[i] == ')') 
        { 
            while(st.top() != 'N' && st.top() != '(') 
            { 
                char c = st.top(); 
                st.pop(); 
               s2 += c; 
            } 
            if(st.top() == '(') 
            { 
                char c = st.top(); 
                st.pop(); 
            } 
        } 
          
        else{ 
            while(st.top() != 'N' && prec(s[i]) <= prec(st.top())) 
            { 
                char c = st.top(); 
                st.pop(); 
                s2 += c; 
            } 
            st.push(s[i]); 
        } 
  
    } 
    while(st.top() != 'N') 
    { 
        char c = st.top(); 
        st.pop(); 
        s2 += c; 
    } 
      
    cout << s2 << endl; 
  
     } 

int main() 
{ 
        cout<<"Infix expression : a+b*c+(d*e) ";
    string exp = "a+b*c+(d*e)";
    cout<<"\nPostfix expression is : ";
    infixToPostfix(exp); 
    return 0; 
}

  

    


