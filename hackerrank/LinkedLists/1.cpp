#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};
void printList(struct Node* head){
    struct Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    struct Node* head=NULL;
    for(int i=0; i<n; i++){
        int value;
        cin>>value;
        struct Node* ne=new Node;
        ne->data=value;
        ne->next=head;
        head=ne;
    }
    printList(head);
    return 0;
}
