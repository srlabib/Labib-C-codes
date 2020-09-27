#include <stdio.h>
#include <string.h>
int string_add(char ara1[],char ara2[]);
int main(void)
{
    char ara[] = "Bangla";
    char ara2[] = "desh";
    int lenth1 = strlen(ara);
    int lenth2 = strlen(ara2);
    char added[100];
    int i,j;
    for(i = 0, j= 0; i<lenth1; i++,j++)
    {
        added[j] = ara[i];
    }
    for(i = 0; i< lenth2; i++,j++)
    {
        added[j] = ara2[i];
    }
    added[j] = '\0';


    printf("%s\n",added);
    return 0;
}


