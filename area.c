#include <stdio.h>
int main()
{
    long long int t,n,x;
    scanf("%d",&t);
    for(x=1; x<=t; x++){
        scanf("%d",&n);
        printf("Case %d: %d\n",x,(2*n-4));
    }
    return 0;
}
