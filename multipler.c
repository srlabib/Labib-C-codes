#include <stdio.h>
int main()
{
     int i;
     int m=0;
     int n=1;
     for(;n<=20;n++){
         for(i=1;i<=10;i++){
            m=m+n;
            printf("%d X %d = %d\n",n,i,m);
         }
         m=0;
         printf("\n");
         }
     return 0;
}

