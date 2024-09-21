#include<iostream>
#include<string>
#include<stack>
#include<sstream>
using namespace std;

int main(){
    int n;
    cin >> n;
    

    while(n--){
        string brackets;
        stack<char> st;
        bool isBalanced = true;
        cin >> brackets;
        for(int i=0; i< brackets.length(); i++){
            char ch=brackets[i];

            if(ch=='(' || ch=='{' || ch=='['){
                st.push(ch);
            }
            else{
                if(!st.empty()){
                    char t=st.top();

                    if((ch==')' && t=='(') || (ch=='}' && t=='{') || (ch==']' && t=='[')){
                        st.pop();
                    }
                    else{
                        isBalanced = false;
                        break;
                    }
                }
                else{
                    isBalanced = false;
                    break;
                }
            }
        }
        if(!st.empty()){
            isBalanced=false;
        }
        if(isBalanced){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}