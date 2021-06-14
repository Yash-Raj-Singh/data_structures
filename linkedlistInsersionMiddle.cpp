
#include <iostream> 
using namespace std; 

class Node { 
public: 
	int data; 
	Node* next; 
}; 


void printList(Node* n) 
{ 
	while (n != NULL) { 
		cout << n->data << " "; 
		n = n->next; 
	} 
} 

Node* insersionAtIndex(Node* head, int data, int index){
    int i = 0;
    Node* new_node = new Node();
        Node* p = head;
    while(i!=index-1){
        p = p->next;
        i++;

    }
    new_node->data = data;
    new_node->next = p->next;
    p->next = new_node;
    return(head);
   
}

 
int main() 
{ 

	Node* head = NULL; 
	Node* second = NULL; 
	Node* third = NULL; 

	
	head = new Node(); 
	second = new Node(); 
	third = new Node(); 

	head->data = 1;  
	head->next = second; 

	second->data = 2; 
	second->next = third; 

	third->data = 3; 
	third->next = NULL; 
    cout<<"Linkedlist before Insersion: ";
	printList(head); 
    cout<<"\nLinkedlist after Insersion: ";
    head =  insersionAtIndex(head, 56, 2);
	printList(head); 



	return 0; 
} 

 
