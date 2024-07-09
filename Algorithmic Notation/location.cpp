// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    
    int item;
    cin>>item;
    int loc=0;
    for(int j=0; j<n; j++){
        if(arr[j]==item){
            loc=j;
        }
    }
    cout<<loc<<endl;

    return 0;
}