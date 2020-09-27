#include <stdio.h>
int main()
{
    int n,i;
    double a,b,c,s,sqr;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%lf %lf %lf",&a,&b,&c);
        s = (a+b+c)/2;
        sqr = (s*(s-a)*(s-b)*(s-c));
        if(sqr < 0){
            printf("Oh, No!\n");
        }
        else{
        printf("%.2lf\n",sqrt(sqr));
        }
    }
    return 0;
}
