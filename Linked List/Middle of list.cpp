//find middle of list
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

Node* findMiddle(Node* head){
    int count=0;
    Node* temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    int mid=count/2+1;

    temp=head;
    while(temp!=NULL){
        mid=mid-1;
        if(mid==0){
            return temp;
        }
        temp=temp->next;
    }
    return NULL;
}


int main(){
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    head->next->next->next->next->next=new Node(60);
    head->next->next->next->next->next->next=new Node(70);

    head=findMiddle(head);
    cout<<head->data;
    return 0;
}