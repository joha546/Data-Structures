#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

class Solution {
  public:
    vector<int> findIndex(vector<int>& arr, int key) {
        // code here.
        int n= arr.size();
        int start=-1;
        
        vector<int> result;
        for(int i=0; i<n; i++){
            if(arr[i]==key){
                start=i;
                break;
            }
        }
        int end=start;
        for(int i=n-1; i>=0; i--){
            if(arr[i]==key){
                end=i;
                break;
            }
        }
        result.push_back(start);
        result.push_back(end);
        return result;
    }
};

// Driver Code
int main() {
    int t;
    cin >> t;
    cin.ignore();  // Ignore the newline after the integer input

    while (t--) {
        vector<int> arr;
        string s;
        getline(cin, s);
        stringstream ss(s);
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        
        int key;
        cin >> key;
        cin.ignore();  // Ignore the newline after the integer input

        Solution ob;
        vector<int> res = ob.findIndex(arr, key);
        for (int i : res) {
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}