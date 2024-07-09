#include <stdio.h>

int main(){
    int DATA[10]={22,65,1,99,32,17,74,49,33,2};
    int N,LOC, MAX, k;
    N=10;
    k=0;
    LOC=0;
    MAX=DATA[0];

    for(int i=0; i<N;i++){
        k=k+1;
        if(k==N){
            printf("LOC=%d, MAX=%d",LOC,MAX);
        }
        if(MAX<DATA[k]){
            LOC=k;
            MAX=DATA[k];
        }
    }
    return 0;
}