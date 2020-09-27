#include <stdio.h>
typedef struct{
int p;
int q;
} Rational;
int LCM(int p,int q)
{
    int min,high;
    min = (p<q) ? p : q;
    high = p+q-min;
    for(int i=1;;i++)
    {
        if((min*i)%high==0)
        {
            return min*i;
        }
    }
}
char compare(Rational num1,Rational num2)
{
    int min;

    min = (num1.p<num2.q)? num1.p:num1.q;
    for(int i=2;i<=min;i++)
    {
        if(num1.p%i==0&&num1.q%i==0)
        {
            num1.p/=i;
            num1.q/=i;
        }
    }
    min = (num2.p<num2.q)?num2.p:num2.q;
    for(int i=2;i<=min;i++)
    {
        if(num2.p%i==0&&num2.q%i==0)
        {
            num2.p/=i;
            num2.q/=i;
        }
    }
    printf("%d %d %d %d\n",num1.p,num1.q,num2.p,num2.q);
    if(num1.p==num2.p&&num1.q==num2.q)
    {
        return 1;
    }
    else{
        return 0;
    }

}
Rational add(Rational num1,Rational num2)
{
    int lcm,sum,min;
    Rational result;
    lcm = LCM(num1.q,num2.q);
    sum = (lcm/num1.q*num1.p)+(lcm/num2.q*num2.p);
    min = (sum<lcm)?sum:lcm;
    for(int i=2;i<=min;i++)
    {
        if(sum%i==0&&lcm%i==0)
        {
            sum/=i;
            lcm/=i;
        }
    }
    result.p=sum;
    result.q=lcm;
    return result;
}
Rational Substraction(Rational num1,Rational num2)
{
    int lcm,sum,min;
    Rational result;
    lcm = LCM(num1.q,num2.q);
    sum = (lcm/num1.q*num1.p)-(lcm/num2.q*num2.p);
    min = (sum<lcm)?sum:lcm;
    for(int i=2;i<=min;i++)
    {
        if(sum%i==0&&lcm%i==0)
        {
            sum/=i;
            lcm/=i;
        }
    }
    result.p=sum;
    result.q=lcm;
    return result;
}
Rational Multiple(Rational num1,Rational num2)
{
    int min;
    Rational result;
    result.p = num1.p*num2.p;
    result.q = num1.q*num2.q;
    min = (result.p<result.q)?result.p:result.q;
    for(int i=2;i<=min;i++)
    {
        if(result.p%i==0&&result.q%i==0)
        {
            result.p/=i;
            result.q/=i;
        }
    }
    return result;
}
Rational devide(Rational num1,Rational num2)
{
    int min;
    Rational result;
    result.p = num1.p*num2.q;
    result.q = num1.q*num2.p;
    min = (result.p<result.q)?result.p:result.q;
    for(int i=2;i<=min;i++)
    {
        if(result.p%i==0&&result.q%i==0)
        {
            result.p/=i;
            result.q/=i;
        }
    }
    return result;
}

int main()
{
    int p1,q1,p2,q2;
    Rational num1,num2;
    Rational Sumation,substraction,multiple,divide;
    scanf("%d %d %d %d",&num1.p,&num1.q,&num2.p,&num2.q);
    Sumation = add(num1,num2);
    substraction = Substraction(num1,num2);
    multiple = Multiple(num1,num2);
    divide = devide(num1,num2);

    if(compare(num1,num2))
    {
        printf("The values are same.\n");
    }
    else{
        printf("The values are not same.\n");
    }

    printf("%d %d\n",Sumation.p,Sumation.q);
    printf("%d %d\n",substraction.p,substraction.q);
    printf("%d %d\n",multiple.p,multiple.q);
    printf("%d %d\n",divide.p,divide.q);
    return 0;
}
