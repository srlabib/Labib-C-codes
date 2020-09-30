//fibonacci of 1000 digit number
//by Labib
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream.h>
//void function intialization 
void Add(char a[],char b[],char *result)
{
    int i,carry=0,digitSum;
    for(i=0;b[i]!='\0';i++)
    {
        digitSum = a[i]-'0'+b[i]-'0'+carry;
        result[i] = (digitSum%10) +'0';
        carry = digitSum/10;
    }

    for(;a[i]!='\0';i++)
    {
        digitSum = a[i]-'0'+carry;
        result[i] = (digitSum%10)+'0';
        carry = digitSum/10;
    }
    if(carry)
        result[i++]=carry+'0';
    result[i]='\0';
}

//Main function
int main()
{
    char n1[1001]="0";
    char n2[1001]="1";
    char Result[1001];
    int num,i;
    scanf("%d",&num);
    while(num--)
    {
        Add(n2,n1,Result);
        strcpy(n1,n2);
        strcpy(n2,Result);
    }
    char fibonacci[1001];
    int lenth = strlen(n1);
    for(i=0;i<lenth;i++)
    {
        fibonacci[i] = n1[lenth-i-1];
    }
    fibonacci[i]='\0';
    puts(fibonacci);
}
