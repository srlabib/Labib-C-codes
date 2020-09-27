#include <stdio.h>
int main()
{
    double u,t,a,s;
    printf("initial velocity(m/s) =");
    scanf("%lf",&u);
    printf("accelaration(m/s^2)=");
    scanf("%lf",&a);
    printf("time(s)=");
    scanf("%lf",&t);
    s = u*t+.5*a*t*t;

    printf("total distance=%.2lf meter",s);



    return 0;
}

