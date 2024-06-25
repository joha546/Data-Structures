#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
    int i,j,min_idx;
    for(i=0; i<n; i++){
        min_idx=i;
        for(j=i+1; j<n; j++){
            if(arr[j]<arr[min_idx]){
                min_idx=j;
            }
        }
        if(min_idx !=i)
            swap(arr[min_idx],arr[i]);
    }
}
int main(){
    int size,arr[100];
    cout<<"Enter size of array: ";
    cin>>size;
    
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    selectionSort(arr,size);
    cout<<"Sorted Array"<<endl;
    for(int j=0; j<size; j++){
        cout<<arr[j]<<" ";
    }
}