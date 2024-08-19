//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int binary_to_decimal(string str) {
        // Code here.
        int d=0;
        int base=1;
        int n;
        n=str.length();
        for(int i=n-1; i>=0; i--){
            if (str[i]=='1'){
                d+= base;
            }
            base *= 2;  // Update base to the next power of 2
        }
        return d;
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.binary_to_decimal(str);
        cout << ans << "\n";
    }
    return 0;
}