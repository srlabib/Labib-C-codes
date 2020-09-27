#include <stdio.h>
#include <math.h>

int main()
{
    long long int num;
    int i,j,NLine=0;
    while(1)
    {
        scanf("%lld",&num);
        if(num<0)return 0;
        if(NLine)printf("\n");
        while(num%2==0)
        {
            printf("    %d\n",2);
            num/=2;
        }
        for(i=3;i<=sqrt(num);)
        {
            if(num%i==0)
            {
                num/=i;
                printf("    %d\n",i);
                continue;
            }
            i+=2;
        }
        printf("    %lld\n",num);
        NLine++;
    }

    return 0;
}
