#include <stdio.h>
#include <math.h>
int prime(long long int num);
int main(void)
{
    int t,i;
    long long int a;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {

        scanf("%lld",&a);
        if(prime(a)==1)
        {
            printf("%lld is a prime\n",a);
        }
        else{
            printf("%lld is not a prime\n",a);
        }
    }
    return 0;
}
int prime(long long int num)
{
    if(num == 2)
    {
        return 1;
    }
    if(num % 2 == 0)
    {
        return 0;
    }
    for(int i=3; i <= sqrt(num); i += 2)
    {
        if(num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}




