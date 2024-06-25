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
    LinkedList() : head(nullptr){}
    void insert(int new_data){
        Node* new_node=new Node();
        new_node->data=new_data;
        new_node->next=head;
        head=new_node;
    }
    void del(int key){
        Node* temp=head;
        Node* prev=nullptr;
        if(temp !=nullptr && temp->data==key){
            head=temp->next;
            delete temp;
            return;
        }
        while(temp !=nullptr && temp->data !=key) {
            prev=temp;
            temp=temp->next;
        }
        if (temp == nullptr) return;
        prev->next = temp->next;
        delete temp;
    }
    void display(){
        Node* temp=head;
        while(temp !=nullptr){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
int main() {
    LinkedList list;
    int n,item,key;

    cout<<"The number of elements: ";
    cin>>n;

    for(int i=0; i<n;++i){
        cout<<"Enter element: "<<i+1<<": ";
        cin>>item;
        list.insert(item);
    }
    list.display();

    cout<<"Key to delete: ";
    cin>>key;

    list.del(key);

    cout<<"After deletion: ";
    list.display();
    return 0;
}
