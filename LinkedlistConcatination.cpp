#include<iostream>
using namespace std;
  class Node{
  public:
  int data;
  Node *next;
 };
Node *list(Node *head,int n){
        Node *p = head;
        for(int i=0;i<n;i++){
        cout<<"Enter element " <<i+1<<":"; 
        cin>>p->data;
        if(i==n-1){
          break;
         }
          p->next = new Node();
          p = p->next;
       }
        p->next = NULL;
        if(n!=0){
        return(head);
       }
     else{
       return(NULL);
     }
  }
  Node *display(Node *head){
        while(head!=NULL){
            cout<<head->data<<" ";
            head = head->next;
    }
    cout<<endl;
  }
  Node *concatinate(Node *l1, Node*l2){
      if( l1 != NULL && l2!= NULL ){
     if (l1->next == NULL)
        l1->next = l2;
    else
        concatinate(l1->next,l2);
   }
    else
        {
            cout << "Either list1 or list2 is NULL\n";
        }
  }
int main(){
        Node *l1 = NULL;
        l1 = new Node();
            cout<<"Enter the no. of elements in first linked list: ";
        int n;
        cin>>n;
      l1 = list(l1,n);
        Node *l2 = NULL;
        l2 = new Node();
        cout<<"Enter the no. of elements in second linked list: ";
        cin>>n;
    l2 = list(l2,n);
      cout<<"First linked list: ";
      display(l1);
      cout<<"second linked list: ";
      display(l2);
      concatinate(l1, l2);
      cout<<"Concated linked list: ";
      display(l1);
      return(0);
}