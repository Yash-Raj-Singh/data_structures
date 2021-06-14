#include <iostream> 
using namespace std; 

class Node
		{ 
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

Node* insersionAfterNode(Node* head, int data, Node* previous_node){
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = previous_node->next;
        previous_node->next = new_node;
   
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
		head =  insersionAfterNode(head, 56, third);
		printList(head); 



	return 0; 
} 
