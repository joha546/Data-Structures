#include<bits/stdc++.h>
using namespace std;
void reverseStr(string str){
    stack<char> st;

    for(int i=0; i<str.length(); i++){
        st.push(str[i]);
    }
    stack<char> temp=st;
    while(!temp.empty()){
        cout<<temp.top()<<" ";
        temp.pop();
    }
}
int main(){
    string str;
    getline(cin,str);
    reverseStr(str);
    
    return 0;
}