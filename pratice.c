#include <stdio.h>
#include <math.h>
int Is_prime(int num)
{
    if (num == 2)
    {
        return 1;
    }
    if (num % 2 == 0)
    {
        return 0;
    }
    for (int i = 3; i <= sqrt(num); i += 2)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    //Declared Variable
    int t;
    scanf("%d ", &t);
    //while loop started
    while (t--)
    {
        int a, b, count = 0;
        scanf("%d", &a, &b);
        for (int i = a; i <= b; i++)
        {
            if (Is_prime(i))
                count++;
        }
        printf("%d\n", count);
    }

    return 0;
}
