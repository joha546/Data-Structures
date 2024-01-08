/* Suppose we are given a string s1, we need to the find total number of substring(including multiple occurrences 
of the same substring) of s1 which are present in string s2. */

#include <iostream>
using namespace std;

int countStr(string s1, string s2){
    int count=0;
    for(int i=0; i<=s1.length(); i++){
        string s3;
        for(int j=i; j<=s1.length(); j++){
            s3 +=s1[j];

            if (s2.find(s3) != string::npos){
                count +=1;
            }
        }
    }
    return count;

}

int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    cout<<countStr(s1,s2)<<endl;
    return 0;
}