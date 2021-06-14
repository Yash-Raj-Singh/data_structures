#include <iostream> 
using namespace std; 

class Node
	{ 
	public: 
		int data; 
		Node *next; 
	}; 

void printList(Node *n) 
	{ 
		while (n != NULL) { 
			cout << n->data << " "; 
			n = n->next; 
		} 
	} 

Node *insersionAtEnd(Node *head, int data){
			Node *new_node = new Node();
				Node *p = head;
			while(p->next!=NULL){
				p = p->next;
			}
			new_node->data = data;
			new_node->next = NULL;
			p->next = new_node;
			return(head);
		
}

int main() 
{ 

		Node *head = NULL; 
		Node *second = NULL; 
		Node *third = NULL; 

		head = new Node(); 
		second = new Node(); 
		third = new Node(); 

		head->data = 1; 
		head->next = second; 

		second->data = 2; 
		second->next = third; 

		third->data = 3; 
		third->next = NULL; 
		cout<<"Which value you want to insert at the end: ";
		int val=0;
		cin>>val,
		cout<<"Linkedlist before Insersion: ";
		printList(head); 
		cout<<"\nLinkedlist after Insersion: ";
		head =  insersionAtEnd(head, val);
		printList(head); 



	return 0; 
} 
