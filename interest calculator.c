#include <stdio.h>
int main()
{
    double total_amount,loan_amount,interest_rate,year,monthly_amount;
    printf("Enter the loan amount: ");
    scanf("%lf",&loan_amount);
    printf("Enter the interest rate: ");
    scanf("%lf",&interest_rate);
    printf("Enter year: ");
    scanf("%lf",&year);
    total_amount = loan_amount+loan_amount*(interest_rate/100)*year;
    monthly_amount = total_amount/(year*12);
    printf("Total amount is %.2lf\n",total_amount);
    printf("Monthly amount is %.2lf\n",monthly_amount);
    return 0;
}

