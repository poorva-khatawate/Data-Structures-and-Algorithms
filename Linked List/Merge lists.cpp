//merge 2 listed list
#include <iostream>
#include <algorithm>
#include <vector>
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
Node* merge(Node* head1,Node* head2){
    vector<int> v;
    Node* temp1=head1;
    Node* temp2=head2;
    while(temp1!=NULL){
        v.push_back(temp1->data);
        temp1=temp1->next;
    }
    while(temp2!=NULL){
        v.push_back(temp2->data);
        temp2=temp2->next;
    }
    sort(v.begin(),v.end());
    Node* dummy=new Node(-1);
    Node* temp=dummy;
    for(int i=0;i<v.size();i++){
        temp->next=new Node(v[i]);
        temp=temp->next;
    }
    return dummy->next;
}

int main(){
    Node* head1=new Node(10);
    head1->next=new Node(20);
    head1->next->next=new Node(30);
    head1->next->next->next=new Node(40);

    Node* head2=new Node(15);
    head2->next=new Node(25);
    head2->next->next=new Node(35);

    Node* temp=merge(head1,head2);
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0; 
}