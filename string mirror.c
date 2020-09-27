#include <stdio.h>
int str_lenth(char str[])
{
    int i;
    for(i=0; str[i] != '\0'; i++);
    return i;
}
int main()
{
    char name[200];
    char reslt[200];
    scanf("%[^\n]%*c",&name);
    int n = str_lenth(name);
    int i,j;
    for(i=0,j=n-1; i<n; i++,j--){
        reslt[j] = name[i];
    }
    reslt[i] = '\0';
    printf("%s\n",reslt);

    return 0;
}

