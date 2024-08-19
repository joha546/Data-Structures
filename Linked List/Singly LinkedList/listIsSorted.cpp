#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
class Solution{
public:
    int IsSorted(struct Node* head,int key){
        Node* temp=head;
        int loc=-1;
        int pos=1;
        while(temp !=NULL){
            if(key<temp->data){
                break;         // no need to any of operation
            }
            else if(key==temp->data){
                loc=pos;
            }
            temp=temp->next;
            pos++;
        }
        return loc;
    }
};

int main(){
    int n,data;
    cin>>n;
    cin>>data;
    struct Node* head= new Node(data);
    struct Node* tail=head;

    for(int i=0; i<n-1; ++i){
        cin>>data;
        tail->next=new Node(data);
        tail=tail->next;
    }
    int key;
    cin>>key;
    Solution obj;
    cout<<obj.IsSorted(head,key)<<endl;
    return 0;
    
}