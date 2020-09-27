#include <stdio.h>
#include <string.h>
int Divider(char *num)
{
    int i,index,remainder,lenth;
    index = 0;
    remainder = (num[0]-'0');
    lenth = strlen(num);
    for(i=0;i<lenth;i++)
    {

        if(remainder>=2)
        {
            num[index++] = (remainder/2)+ '0';
            remainder = (remainder%2);
        }
        else if(i>0)
        {
            num[index++] = '0';
        }

        if(i+1!=lenth)
        {
            remainder*=10;
            remainder+=(num[i+1]-'0');
        }

    }
    num[index] = '\0';
    return remainder;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char num[1101];
        int remainder=0;
        scanf("%s",num);
        if(strcmp(num,"0")==0)
        {
            printf("Not a power of 2\n");
            continue;
        }
        while(remainder==0)
        {
            remainder = Divider(num);
//            printf("%s,%d\n",num,remainder);
        }
        if(strcmp(num,"")==0)
        {
            printf("It's a power of 2\n");
        }
        else{
            printf("Not a power of 2\n");
        }
    }
    return 0;
}
