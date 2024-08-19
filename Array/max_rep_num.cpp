#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Returns maximum repeating element in arr[0..n-1].
    // The array elements are in range from 0 to k-1
    int maxRepeating(int k, vector<int>& arr) {
        // code here
        vector<int> count={0};
        int n=sizeof(arr)/sizeof(arr[0]);
        for(int i=0; i<n; i++){
            count[arr[i]]++;
        }
        int x=0;
        for(int j=0; j<n; j++){
            if(count[j]>x){
                x=j;
            }
        }
        return x;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.maxRepeating(k, arr);
        cout << res << endl;
    }
    return 0;
}