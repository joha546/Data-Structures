#include<bits/stdc++.h>
using namespace std;


// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
        // Code Here
        int l=INT_MIN;
        int sl=INT_MIN;
        for(int num:arr){
            if(num>l){
                sl=l;
                l=num;
            }
            else if(num>sl && num<l){
                sl=num;
            }
        }
        if(sl==INT_MIN){
            return -1;
        }
        return sl;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.print2largest(arr);
        cout << ans << endl;
    }
    return 0;
}