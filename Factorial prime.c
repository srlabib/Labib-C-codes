#include<stdio.h>

int main()
{
    int prime[] = {0,2,3,5,7,11,13,17,23,29,31,37,41,43,53,57,59,61,67,71,73,79,83,87,89,97};
    int num;
    scanf("%d",&num);
    int x[num+1];
    int i,j,a;
    printf("%d!=",num);
    for(i=1; i<=num; i++) {
        x[i] = i;
    }

    for(i=1; prime[i]<= num; i++) {
        a=0;
        for(j=prime[i]; j<=num; j++) {
            for( ; x[j]%prime[i]==0; x[j]=x[j]/prime[i],a++);
        }
        if(a>0) {
            printf("(%d,%d)",prime[i],a);
        }
    }
    printf("\n");
    return 0;
}
