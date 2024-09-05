//delete nth node using pointers
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

Node* deleteNode(Node* head,int n){
    Node* slow=head;
    Node* fast=head;
    for(int i=0;i<n;i++){
        fast=fast->next;
    }
    if(fast==NULL{
        return head->next;
    })
    while(fast->next!=NULL){
        slow=slow->next;
        fast=fast->next;
    }
    Node* deletenode=slow->next;
    slow->next=slow->next->next;
    free(deletenode);
    return head;
}
int main(){
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);

    head=deleteNode(head,3);
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}