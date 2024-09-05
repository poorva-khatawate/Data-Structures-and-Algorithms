//find intersection of two linked lists
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

Node* findIntersection(Node* head1,Node* head2){
    while(head2!=NULL){
    Node* temp=head1;
    while(temp!=NULL){
        if(temp==head2){
            return temp;
        }
        temp=temp->next;
    }
    head2=head2->next;
    }
}

int main(){
    Node *head1=new Node(10);
    head1->next=new Node(20);
    head1->next->next=new Node(30);
    head1->next->next->next=new Node(40);
    head1->next->next->next->next=new Node(50);
    head1->next->next->next->next->next=new Node(60);
    head1->next->next->next->next->next->next=new Node(70);
    Node *head2=new Node(100);
    head2->next=new Node(200);
    head2->next->next=head1->next->next->next;

    Node* temp=findIntersection(head1,head2);
    cout<<temp->data;
    return 0;
}