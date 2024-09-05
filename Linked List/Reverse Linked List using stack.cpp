//Reverse linked list using stack
#include <iostream>
#include <stack>
#include <string>
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
    stack<int> s;
    Node* temp=head;
    while(temp!=NULL){
        s.push(temp->data);
        temp=temp->next;
    }
        temp=head;
        while(!s.empty()){
        temp->data=s.top();
        s.pop();
        temp=temp->next;
    }
    return head;
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