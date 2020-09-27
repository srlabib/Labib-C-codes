#include <stdio.h>
int angrm(char a[],char b[])
{

    int i=0;
    int x[26] = {0},y[26] = {0};
    while(a[i] != '\0' ){
        x[a[i]-'a']++;
        i++;
    }
    i=0;
    while(b[i] != '\0' ){
        y[b[i]-'a']++;
        i++;
    }
    i=0;
    for(i=0;i<26;i++){
        if(x[i]!=y[i]){
            return 0;
        }
    }

    return 1;
}

int main()
{

    char a[100];
    char b[100];
    scanf("%s",&a);
    scanf("%s",&b);
    if(angrm(a,b)==1){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}


