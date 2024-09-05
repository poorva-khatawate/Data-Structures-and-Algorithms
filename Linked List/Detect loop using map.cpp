//detect loop in linked list using map
#include <iostream>
#include <map>
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

bool detect(Node* head){
    map<Node*,int> mpp;
    Node* temp=head;
    while(temp!=NULL){
        if(mpp.find(temp)!=mpp.end()){
            return true;
        
        }
        mpp[temp]=1;
        temp=temp->next;
    }
    return false;

}

int main(){
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=head->next;

    bool flag=detect(head);
    if(flag){
        cout<<"Loop detected";
    }
    else{
        cout<<"No loop detected";
    }
    return 0;
}