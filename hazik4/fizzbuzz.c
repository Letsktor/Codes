#include <stdio.h>
int main()
{
int d;
    for ( int i = 1; i <= 100; i++)
    {
        d=i;
        if (d % 3 == 0 && d % 5 == 0)
        {
            printf("fizzbuzz\n");
        }
        else
        {
            if (d % 3 == 0)
            {
                printf("fizz\n");
            }
            if (d % 5 == 0)
            {
                printf("buzz\n");
            }
            if (d % 3 != 0 && d % 5 != 0)
            {
                printf("%d\n",d);
            }
        }
    }

    return 0;
}