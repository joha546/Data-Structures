// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    float MEAN(int,int,int);
    
    cin>>a>>b>>c;
    cout<<"The average of values: "<<MEAN(a,b,c);

    return 0;
}
float MEAN(int t1,int t2,int t3){
    float ave;
    ave=(t1+t2+t3)/3;
    return ave;
}