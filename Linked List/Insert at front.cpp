//insert node at front of linked list
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void printList(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node* insertAtFront(Node **head,Node* temp){
    if(head==NULL){
        *head=temp;
        return *head;
    }
    temp->next=*head;
    *head=temp;
    return *head;
}

int main(){
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);

    Node *temp=new Node(5);

    head=insertAtFront(&head,temp);
    printList(head);
    return 0;
}