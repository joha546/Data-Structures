#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};
/*
This code is encountering a segmentation fault primarily due to an issue in the insertAtend function. Let's break down the problem:

In the insertAtend function:
cppCopyvoid insertAtend(struct Node* head, int v){
    struct Node *temp;
    struct Node* ne=new Node;
    temp=head;

    ne->data=v;
    ne->next=NULL;
    while(temp!=NULL)
    {
        temp=temp->next;
    }
    temp->next=ne;
}
The issue here is that the function traverses the list until temp becomes NULL, and then tries to access temp->next. This is attempting to dereference a NULL pointer, which causes a segmentation fault.
Additionally, the insertAtend function takes the head pointer by value, not by reference. This means any changes made to head within the function won't affect the original list in the main function.

To fix these issues, you should:

Modify the insertAtend function to stop at the last node, not at NULL.
Pass the head pointer by reference.
*/
void insertAtend(struct Node*& head, int v){
    struct Node* ne = new Node;
    ne->data = v;
    ne->next = NULL;

    if (head == NULL) {
        head = ne;
        return;
    }

    struct Node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = ne;
}

void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
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
    int v;
    cin>>v;
    insertAtend(head,v);
    printList(head);
    return 0;

}