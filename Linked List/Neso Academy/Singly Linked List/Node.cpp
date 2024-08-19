#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

int main(){
    struct Node* head=NULL;
    // memory allocate for the node.
    head=(struct Node*)malloc(sizeof(struct Node));
    head->data=45;
    head->next=NULL;
    cout<<head->data<<endl;
    return 0;
}