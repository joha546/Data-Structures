#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

int main(){
    struct Node* head=new Node;
    head->data=45;
    head->next=NULL;

    struct Node* current=new Node;
    current->data=92;
    current->next=NULL;
    head->next=current;

    current->data=46;
    current->next=NULL;
    head->next->next=current;


    cout << "Data: " << head->data << endl;
    cout << "Next: " << head->next << endl;
    cout << "Data: " <<current->data << endl;
    cout << "Next: " << current->next << endl;
    cout << "Data: " <<current->data << endl;
    cout << "Next: " << current->next << endl;
    
    delete head; 
    return 0;
}