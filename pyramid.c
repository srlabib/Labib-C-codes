#include <stdio.h>
int main(void)
{
    int n,i,s,m,a,b;
    scanf("%d",&n);
    s=n;
    b=0;
    for(m=0; m<n; m++){
        s--;
        for(i=0; i<s; i++){
            printf(" ");
        }
        for(a=0;a<b;a++){
            printf("* ");
        }
        printf("*");
        printf("\n");
        b++;
    }
return 0;
}
