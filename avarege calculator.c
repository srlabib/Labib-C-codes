#include <stdio.h>
int main(void)
{
    //variables
    int amount,i;
    double num, total, average;
    total = 0;
    //Heading
    printf("Average Calculator\n");
    printf("===================");
    printf("\n                      SRLabib");
    //main codes starts
    printf("\n\n\nAmount of numbers:");
    scanf("%d",&amount);
    printf("\nNow type the numbers one by one and press Enter after each\n");
    for(i=0; i<amount; i++){
        scanf("%lf",&num);
        total = total + num;
    }
    average = total / amount;

    if (average == (int)average){
        average = (int)average;
        printf("The average is : %.0lf",average);
    }
    else
    {
        printf("The average is : %.4lf\n\n",average);
    }
    return 0;
}
