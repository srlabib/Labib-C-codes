#include <stdio.h>
int main(void){
    int a,b,x,i,c=0,d;
    scanf("%d %d",&a,&b);
    if(a>b){
        x=a;
    }
    else{
        x=b;
    }
    for(i=1;i<x;i++){
        if(a%i==0 && b%i==0 && a%i==b%i){
            if(i>c){
               c=i;
            }
        }
    }
    printf("GCD is : %d\n",c);
    d=(a*b)/c;
    printf("LCM is : %d\n",d);


    return 0;
}
