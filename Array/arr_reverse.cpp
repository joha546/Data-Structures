#include<bits/stdc++.h>
using namespace std;

int reverseArray(int arr[], int n){
    int st=0;
    int end=n-1;
    while(st<end){
        swap(arr[st],arr[end]);
        ++st;
        --end; 
    }
    for(int k=0; k<n; k++){
        cout<<arr[k]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    reverseArray(arr, n);
    return 0;
}