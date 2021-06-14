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

Node *deletionAtMiddle(Node *head, int index)
{      
    int i = 0;
    Node *p = head;
    while(i!=index-1)
    {
       p = p->next;
    }
    Node *q = p->next;
	p->next = q->next;
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
            int index = 0;
            cout<<"At what index you want to delete the element";
            cin>>index;
			cout << "Linkedlist before deletion: ";
			printList(head);
			head = deletionAtMiddle(head, index);
			cout << "\nLinkedlist after deletion: ";
			printList(head);

	return 0;
}


