#include<stdlib.h>
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

Node *deletionAtValue(Node *head, int value)
{      
    Node *p = head;
	Node *q = p->next;
    while(q->data!=value && q->next!=NULL)
    {
       q = q->next;
       p = p->next;
    }
	if(q->data!=value){
		cout<<endl<<"Entered value "<<"("<<value<<")"<<" is not in given linked list!";
		abort();
	}
	else{
	    p->next = q->next;
		delete(q);
		return (head);
	}
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
            cout<<"Enter the value you want to delete: ";
			int val;
			cin>>val;
			cout << "Given linked list: ";
			printList(head);
			 deletionAtValue(head, val);
			cout << "\nLinkedlist after deletion: ";
			printList(head);

	return 0;
}
