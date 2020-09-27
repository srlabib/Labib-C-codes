#include <stdio.h>
int SubString(char *str,char*substr)
{
    int i,j,k,count=0;
    for(i=0;str[i]!='\0';i++)
    {
        for(j=i,k=0;str[j]==substr[k];j++,k++)
        {
            if(substr[k+1]=='\0')
            {
                count++;
                break;
            }
        }
    }
    return count;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str[128];
        char substr[128];
        scanf("%s %s",str,substr);
        printf("%d\n",SubString(str,substr));
    }

    return 0;
}
