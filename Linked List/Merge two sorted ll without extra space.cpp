//merge 2 sorted linked list without extra space
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

Node* merge(Node* list1,Node* list2){
    Node* dummy=new Node(-1);
    Node* temp=dummy;
    while(list1!=NULL && list2!=NULL){
        if(list1->data<=list2->data){
            temp->next=list1;
            list1=list1->next;
        }
        else{
            temp->next=list2;
            list2=list2->next;
        }
        temp=temp->next;
    
    if(list1!=NULL){
        temp->next=list1;
    }
    else{
        temp->next=list2;
    }
    }
    return dummy->next;
}

int main(){
    Node* head1=new Node(10);
    head1->next=new Node(20);
    head1->next->next=new Node(30);
    head1->next->next->next=new Node(40);
    head1->next->next->next->next=new Node(50);

    Node* head2=new Node(15);
    head2->next=new Node(25);
    head2->next->next=new Node(35);
    head2->next->next->next=new Node(45);
    head2->next->next->next->next=new Node(55);
    head2->next->next->next->next->next=new Node(65);
    head2->next->next->next->next->next->next=new Node(75);

    Node* temp=merge(head1,head2);
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}