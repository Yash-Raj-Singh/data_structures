#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> myStack;
    stack<int> myStack2;
    myStack.push(22);
    myStack.push(12);
    myStack.push(12);
    myStack.push(99);
    myStack2.swap(myStack);
    cout<< " " <<myStack2.size()<<endl;

    while (!myStack2.empty())
    {
        cout << " " <<myStack2.top();
        myStack2.pop();
    }
}
