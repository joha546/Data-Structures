#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};
void count_of_nodes(Node* head){
    int cnt=0;
    struct Node* temp=NULL;
    temp=head;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    cout<<"Number of nodes is: "<<cnt<<endl;
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
    count_of_nodes(head);
    return 0;
}