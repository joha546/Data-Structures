// Brute Force Approach.

#include<iostream>
#include<string>
#include<sstream>
#include<stack>
using namespace std;

int main(){
    int n, queryInst, query_data;
    string queryLine;
    cin >> n;
    stack<int> st, stackMax;

    for(int i=0; i<=n; i++){
        getline(cin, queryLine);

        istringstream ss(queryLine);
        ss >> queryInst >> query_data;

        switch(queryInst){
            case 1:
                st.push(query_data);
                if(stackMax.empty() || stackMax.top() <= st.top()){
                    stackMax.push(query_data);
                }
                break;
            case 2:
                if(stackMax.top()==st.top()){
                    stackMax.pop();
                    st.pop();
                }
                break;
            case 3:
                cout << stackMax.top() << endl;
        }
    }
    return 0;
}




// Hacker Rank solved.

// #include<iostream>
// #include<sstream>
// #include<string>
// #include<vector>
// #include <stack>

// using namespace std;

// string ltrim(const string &);
// string rtrim(const string &);

// /*
//  * Complete the 'getMax' function below.
//  *
//  * The function is expected to return an INTEGER_ARRAY.
//  * The function accepts STRING_ARRAY operations as parameter.
//  */

// vector<int> getMax(vector<string> operations) {
    
//     int queryInst, query_data;
//     stack<int> st, stackMax;
//     vector<int> result;
    
//     for(const string& op: operations){
//         istringstream ss(op);
//         ss >> queryInst >> query_data;
//         if(queryInst==1){
//             st.push(query_data);
//             if (stackMax.empty() || query_data >= stackMax.top()) {
//                 stackMax.push(query_data);
//             }
//         }
//         else if(queryInst==2){
//             if(!st.empty()){
//                 if(stackMax.top()==st.top()){
//                 stackMax.pop();
//                 }
//             st.pop();
//             }
//         }
//         else if(queryInst==3) {
//             if(!stackMax.empty()){
//                 result.push_back(stackMax.top());  // Store the current maximum
//             }
//         }
//     }
//     return result;
// }

// int main()
// {
//     ofstream fout(getenv("OUTPUT_PATH"));

//     string n_temp;
//     getline(cin, n_temp);

//     int n = stoi(ltrim(rtrim(n_temp)));

//     vector<string> ops(n);

//     for (int i = 0; i < n; i++) {
//         string ops_item;
//         getline(cin, ops_item);

//         ops[i] = ops_item;
//     }

//     vector<int> res = getMax(ops);

//     for (size_t i = 0; i < res.size(); i++) {
//         fout << res[i];

//         if (i != res.size() - 1) {
//             fout << "\n";
//         }
//     }

//     fout << "\n";

//     fout.close();

//     return 0;
// }

// string ltrim(const string &str) {
//     string s(str);

//     s.erase(
//         s.begin(),
//         find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
//     );

//     return s;
// }

// string rtrim(const string &str) {
//     string s(str);

//     s.erase(
//         find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
//         s.end()
//     );

//     return s;
// }







