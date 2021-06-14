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
			while (n != NULL)
			{
				cout << n->data << " ";
				n = n->next;
			}
		}

Node *insersionAtHead(Node *head, int data)
{

		Node *newHead = new Node();
		if(newHead==NULL){
         cout<<"Memory cannot be allocated";
		 return 0;
		}
		else{
		newHead->data = data;
		newHead->next = head;
		return (newHead);
		}
}

// Driver code
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
			cout<<"Enter the element you want to insert at head: ";
			int a;
			cin>>a,
			cout << "Linkedlist before Insersion: ";
			printList(head);
			cout << "\nLinkedlist after Insersion: ";
			head = insersionAtHead(head, a);
			printList(head);

	return 0;
}


