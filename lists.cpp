#include<iostream>
#include<list>
using namespace std;

void display(list<int> &l1){
list<int> :: iterator itr1;          // Iterator is a pointer to the elements of the list     
for (itr1 = l1.begin(); itr1 != l1.end(); itr1++)
{
    cout<<*itr1<<" ";
}
cout<<endl;
}
int main(){
list<int> list1;  // List of length 0
list1.push_back(5);
list1.push_back(7);
list1.push_back(1);
list1.push_back(9);
list1.push_back(17);
display(list1);
// list1.pop_back();                   //  Delete last element
// display(list1);
// list1.pop_front();                  // Delete first element
// display(list1);
// list1.remove(9);                         //  Delete all the 9 from list
// display(list1);

// list1.sort();                              // Sort the elements of the list
// display(list1);
list<int> list2(3);                        // Empty List of size 3
list<int> :: iterator itr2;
itr2 = list2.begin();
*itr2 = 11;
itr2++;
*itr2 = 34;
itr2++;
*itr2 = 9;
itr2++;
display(list2);
cout<<"List1 after merging: ";
list1.merge(list2);                       // Merges the two lists
// display(list1);
// list1.reverse();
// display(list1);
list1.unique();                           // Removes consecutive duplicate elements
display(list1);
return 0;
}