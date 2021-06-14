#include<iostream>
#include<stack>

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

// Function for merging two stacks

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
    // cout<<"Enter 1 for infix to postfix conversion : \n";
    // cout<<"Enter 2 for merging two stacks : ";
    // int x;
    // cin>>x;
    // if(x == 1){
        cout<<"Enter the infix expression : ";
    string exp;
    cin>>exp;
    infixToPostfix(exp); 

    // }
    // if(x == 2){
    //     stack<int> s1;
    //     stack<int> s2;
    //  cout<<"Enter the no of elements in First stack : ";
    //   input(s1);
    //  cout<<"Enter the no of elements in Second stack : ";
    //   input(s2);
    //      cout<<"Merged Stack : ";
    //   Merge(s1, s2);
    // }


    return 0; 
}

  

    
