class Solution {
  public:
    int findElementAtIndex(int n, int key, vector<int> &arr) {
        // code here
        for(int i=0; i<n; i++){
            if(i==key){
                return arr[i];
            }
        }
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        int key;
        scanf("%d",&key);
        
        
        vector<int> arr(n);
        Array::input(arr,n);
        
        Solution obj;
        int res = obj.findElementAtIndex(n, key, arr);
        
        cout<<res<<endl;
        
    }
}

// }