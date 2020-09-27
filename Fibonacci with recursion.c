#include <stdio.h>
#include <string.h>
int f_count;
int fibo[50];
int fib(int n)
{
    f_count++;
    if(fibo[n] != 0 || n == 1 || n == 2)
    {
        return fibo[n];
    }
    fibo[n] = fib(n-1) + fib(n-2);
    return fib(n-01) +  fib(n-2);
}

int main()
{
    char ch[3];
    int n;
    scanf("%d",&n);
    fibo[1] = 1;
    fibo[2] = 2;
    if(n == 1)
    {
        strcpy(ch,"st");
    }
    else if(n == 2)
    {
        strcpy(ch, "nd");
    }
    else if(n == 2)
    {
        strcpy(ch, "rd");
    }
    else{
        strcpy(ch, "th");
    }
    printf("%d%s Fibonacci is %d\n",n,ch,fib(n));
    printf("Number of function calls : %d\n",f_count);

    for(int i=1; fibo[i] != 0; i++)
    {
        printf("%d \n",fibo[i]);
    }
    return 0;

}
