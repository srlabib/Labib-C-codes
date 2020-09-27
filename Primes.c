#include <stdio.h>
#include <math.h>
int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int count = 0;
        int a,b;
        scanf("%d %d",&a,&b);
        char num[b];
        int i,j;
        for(i = 2; i<b; i++)
        {
            num[i] = 1;
        }
        for(i=a; i<sqrt(b); i++)
        {
            if(num[i] == 1)
            {
                for(int j = i+i; j<= b ; j = j+i)
                {
                    num[j] = 0;
                }
            }
        }

        for(i = a; i <= b; i++)
        {
            if( num[i]==1)
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
}
