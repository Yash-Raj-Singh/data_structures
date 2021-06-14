    
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

Node *deletionAtEnd(Node *head)
{      
    Node *p = head;
	Node *q = p->next;
    while(q->next!=NULL)
    {  
       p = p->next;
       q = q->next;
    }
	p->next = NULL;
    delete(q);


		return (head);
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
			cout << "Linkedlist before deletion: ";
			printList(head);
			head = deletionAtEnd(head);
			cout << "\nLinkedlist after deletion: ";
			printList(head);

	return 0;
}
