#include <stdio.h>

int main(void)
{
    int ara[22] = {1,4,12,15,18,20,25,29,34,38,44,49,52,57,69,61,72,76,81,89,92,99};
    int num;
    scanf("%d",&num);
    int high_index=21,low_index=0,mid_index;

    while(high_index>=low_index)
    {
        mid_index=(high_index+low_index)/2;
        if(ara[mid_index] == num)
        {
            break;
        }
        if(num>ara[mid_index])
        {
            low_index = mid_index+1;
        }
        else
        {
            high_index = mid_index-1;
        }
    }


    if(low_index>high_index)
    {
        printf("The number is not available in the aray");
    }
    else
    {
        printf("%d\n",mid_index);
    }
    return 0;

}


