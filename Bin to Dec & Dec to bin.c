#include <stdio.h>
int Decimal(int num);
int Binary(long Dec);
int main(void)
{
    printf("Binary to Decimal or Decimal to Binary converter\n\t\tBy S.R.Labib\n\n");
    printf("Enter \"d\" to covert to Decimal or Enter \"b\" to convert to binary.To exit enter \"e\"\nInput:");
    while(1){
        char input;
        int inpt,outpt;
        scanf("%c",&input);
        if(input == 'd'|| input == 'b' || input == 'e')
        {
            if(input == 'd')
            {
                printf("Enter a Binary number(Highest 10 digit):");
                scanf("%d",&inpt);
                outpt = Decimal(inpt);
                    if(outpt == 0)
                    {
                        printf("The number is not a valid Binary\n");
                    }
                    else
                    {
                        printf("The Binary number is:%d\n",outpt);
                    }
            }
            if(input == 'b')
            {
                printf("Enter a Decimal number:");
                scanf("%d",&inpt);
                outpt = Binary(inpt);
                printf("The Binary number is : %d\n",outpt);
            }
            if(input == 'e')
            {
                break;
            }
        }

    }


}

int Binary(long Dec)
{
    long Bin = 0;
    int i = 1;
    for( ;Dec>0;Dec = Dec /2, i = i*10)
    {
        Bin = Bin + (Dec%2)*i;
    }
    return Bin;
}

int Decimal(int num)
{
    long   binary_val, decimal_val = 0, base = 1, rem,test;
    binary_val = num;
    test = num;
    for(;test>0;test=test/10)
    {
        if(test%10 > 1){
            break;
        }
    }
    if(test == 0)
    {
        while (num > 0)
        {
            rem = num % 10;
            decimal_val = decimal_val + rem * base;
            num = num / 10 ;
            base = base * 2;
        }
        return decimal_val;
    }
    else
    {
        return 0;
    }
}
