#include <stdio.h>
int main()
{
    int Decimal=1,i,binry[1000],m,j=0;
//    scanf("%d",&Decimal);
    printf("Decimal        Binary\n");
    while(j<=100){
        j++;
        Decimal = j;
        printf("%d\t=\t",j);
        for(i=0;Decimal>0;i++){
            binry[i] = Decimal % 2;
            Decimal = Decimal/2;
        }
        for(i=i-1;i>=0;i--){
            printf("%d",binry[i]);
        }
    printf("\n");
    }
    return 0;
}
