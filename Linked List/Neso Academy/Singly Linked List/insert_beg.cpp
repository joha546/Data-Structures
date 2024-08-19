#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};
void InsertBeg(struct Node*& head, int data){  // called by reference
    struct Node* ne=new Node;
    ne->data=data;
    ne->next=head;
    head=ne;
}

void printList(struct Node* head){
    struct Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    int n;
    cin>>n;
    struct Node* head=NULL;
    struct Node* tail=head;
    for(int i=0; i<n; i++){
        int value;
        cin>>value;
        struct Node* newNode=new Node;
        newNode->data=value;
        newNode->next=NULL;

        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    int data;
    cin>>data;
    InsertBeg(head,data);
    printList(head);
    return 0;
}