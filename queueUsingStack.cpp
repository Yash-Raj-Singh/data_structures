# include<iostream>

using namespace std;

class Stack
{
    int top;
    public:
    int a[10];  
    Stack()
    {
        top = -1;
    }
    
    void push(int x);
    int pop();
    bool isEmpty();
};

void Stack::push(int x)
{
    if(top >= 10)
    {
        cout << "Stack Overflow \n";
    }
    else
    {
        a[++top] = x;
    
    }
}

int Stack::pop()
{
    if(top < 0)
    {
        cout << "Stack Underflow \n";
        return 0;
    }
    else
    {
        int d = a[top--];
        return d;
    }
}

bool Stack::isEmpty()
{
    if(top < 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

class Queue {
    public:
    Stack S1, S2;
    
    void enqueue(int x);
    
    int dequeue();
};

void Queue :: enqueue(int x) 
{
    S1.push(x);
    cout << "Element "<<x<<" Inserted into Queue\n";
}

int Queue :: dequeue() 
{
    int x, y;
    while(!S1.isEmpty()) 
    {
        x = S1.pop();
        S2.push(x);
    }
  
    y = S2.pop();
  
    while(!S2.isEmpty()) 
    {
        x = S2.pop();
        S1.push(x);
    }
  
    return y;
}

int main()
{    
    int val, value;
    Queue q;
    do{
    cout<<"Enter 1 for Enqueue: \n"; 
    cout<<"Enter 2 for Dequeue: \n";
    cout<<"Enter 3 for Exit: \n";
    cin>>val;
    if(val == 1){
      cout<<"Enter the value you want to enqueue: ";
       cin>>value;
       q.enqueue(value);
        
    } 
   else if(val == 2){
    cout << "Removing element " << q.dequeue()<<" from queue\n" ;

    } 
   else if(val == 3){
    exit;
    } 
    else{
        cout<<"Wrong choice";
    }
    }while(val!=3);
    return 0;
}