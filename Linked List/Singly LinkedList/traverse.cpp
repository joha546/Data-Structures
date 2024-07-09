#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
};
int main(){
    Node* head;
    Node* one=NULL;
    Node* two=NULL;
    Node* three=NULL;

    // allocate memory for each node
    one=new Node();
    two=new Node();
    three=new Node();

    // assign value for each node
    one->data=1;
    two->data=2;
    three->data=3;

    //connect nodes;
    one->next=two;
    two->next=three;
    three->next=NULL;

    // set head to one;
    int cnt=0;
    head=one;
    while(head !=NULL){
        cout<<head->data<<"->";
        cnt++;
        head=head->next;
    }
    return 0;

}