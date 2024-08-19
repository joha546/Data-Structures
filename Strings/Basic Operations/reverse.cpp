#include<bits/stdc++.h>
using namespace std;

string reverseString(string s){
    string rev;
    for(int i=s.length()-1; i>=0; i--){
        rev +=s[i];
    }
    return rev;
}

/*
Time Complexity : O(n)
Auxuliary Space : O(n) for a extra string
*/

int main(){
    string s;
    getline(cin,s);
    string res=reverseString(s);
    cout<<res<<endl;
    return 0;
}