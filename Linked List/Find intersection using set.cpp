//find intersection of linked lists using set
#include <iostream>
#include <set>
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

Node* find(Node* head1, Node* head2){
    set<Node*> s;
    while(head1!=NULL){
        s.insert(head1);
        head1=head1->next;
    }

    while(head2!=NULL){
        if(s.find(head2)!=s.end()){
            return head2;
        }
        head2=head2->next;
    }
    return NULL;
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

    Node* temp=find(head1,head2);
    cout<<temp->data;
    return 0;
}