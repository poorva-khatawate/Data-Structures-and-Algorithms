//delete node head not given 
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

Node* getNode(Node* head,int key){
    Node* temp=head;
    while(temp->next!=NULL){
        if(temp->data==key){
            return temp;
        }
        temp=temp->next;
    }
    return NULL;
}

void deletenode(Node* temp){
    temp->data=temp->next->data;
    temp->next=temp->next->next;
}

int main(){
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);

    Node* temp=getNode(head,30);
    deletenode(temp);
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    return 0; 
}