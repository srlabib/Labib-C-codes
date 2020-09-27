#include <stdio.h>
int main()
{
    int ara[22],temp[22];
    int t,n,i,j;
    scanf("%d",&t);
    for(;t>0;t--)
    {
        scanf("%d",&n);
        for(i = 0;i<=n;i++)
        {
            ara[i] = 0;
            temp[i] = 0;
        }
        for(i = 1; i <= n; i++ )
        {
            for(j = 0; j < i; j++)
            {
                if( j == 0)
                {
                    temp[j] = 1;
                    printf("%d",temp[j]);
                }
                else
                {
                    temp[j] = ara[j]+ara[j-1];
                    printf("%d",temp[j]);
                }

                if(!(j == i-1))
                {
                    printf(" ");
                }

            }
            printf("\n");
            for(int a = 0; a<(j+1); a++)
            {
                ara[a] = temp[a];
            }
        }
        printf("\n");
    }

    return 0;
}
