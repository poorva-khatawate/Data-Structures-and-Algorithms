//delete nth node form linked list
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
    int cnt=0;
    Node* temp=head;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    if(cnt==n){
        Node* newnode=head;
        head=head->next;
        free(newnode);
        return head;
    }
    temp=head;
    int res=cnt-n;
    while(temp!=NULL){
        res--;
        if(res==0)
            break;
        temp=temp->next;    
    }   
    Node* deletenode=temp->next;
    temp->next=temp->next->next;
    free(deletenode);
    return head;
}

int main(){
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);

    int n;
    cin>>n;
    head=deleteNode(head,n);
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    return 0;
}