//Reverse linked list using pointers
#include <iostream>
#include <algorithm>
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

Node* reverseList(Node* head){
    Node* prev=NULL;
    Node* cur=head;
    Node* front;
    while(cur!=NULL){
        front=cur->next;
        cur->next=prev;
        prev=cur;
        cur=front;
    }
    return prev;
}


int main(){
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);

    head=reverseList(head);
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    return 0;
}