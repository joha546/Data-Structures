#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c,d;
    float x,x1,x2;
    scanf("%d %d %d",&a,&b,&c);
    
    d=b*b-4*a*c;
    if(d>0){
        x1=((-1)*b+sqrt(d))/(2*a);
        x2=((-1)*b-sqrt(d))/(2*a);
        printf("%f %f",x1,x2);
    }
    else if(d==0){
        x=((-1)*b)/(2*a);
        printf("%d",x);
    }
    else{
        printf("No solution");
    }
    return 0;
}