#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
class LinkedList{
private:
    Node* head;
public:
    LinkedList():head(nullptr){}
    
    void insert(int new_data){
        Node* new_node=new Node();
        new_node->data=new_data;
        new_node->next=head;
        head=new_node;
    }
    void display(){
        Node* temp=head;
        while(temp != nullptr){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
int main(){
    LinkedList list;
    int n,item;
    cout<<"The number of elements: ";
    cin>>n;
    for(int i=0;i<n;++i) {
        cout<<"Enter elements"<<i+1<<": ";
        cin>>item;
        list.insert(item);
    }
    cout<<"Linked List: ";
    list.display();

    return 0;
}
