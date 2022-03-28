#include <stdio.h>

int main()
{
    int ma;
    printf("Add meg a haromszogek magassagat:\n");
    scanf("%d", &ma);
    if (ma > 3)
    {
        for (int i = 1; i <= ma - 2; i++)
        {
            for (int k = 0; k < ma - i; k++)
            {
                printf(" ");
            }

            for (int j = 1; j <= i; j++)
            {
                printf("#");
            }
            for (int j = 2; j <= i; j++)
            {
                printf("#");
            }
            for (int k = 0; k < ma - i; k++)
            {
                printf(" ");
            }
            printf("\n");
        }
        for (int i = ma - 3; i > 0; i--)
        {
            for (int k = 0; k < ma - i; k++)
            {
                printf(" ");
            }

            for (int j = 1; j <= i; j++)
            {
                printf("#");
            }
            for (int j = 2; j <= i; j++)
            {
                printf("#");
            }
            for (int k = 0; k < ma - i; k++)
            {
                printf(" ");
            }
            printf("\n");
        }
    }
    if(ma==3)
    {
        for (int i = 1; i <= ma - 1; i++)
    {
        for (int k = 0; k < ma - i; k++)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        for (int j = 2; j <= i; j++)
        {
            printf("#");
        }
        for (int k = 0; k < ma - i; k++)
        {
            printf(" ");
        }
        printf("\n");
    }
    for (int i = ma - 2; i > 0; i--)
    {
        for (int k = 0; k < ma - i; k++)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        for (int j = 2; j <= i; j++)
        {
            printf("#");
        }
        for (int k = 0; k < ma - i; k++)
        {
            printf(" ");
        }
        printf("\n");
    }

    }
    

    return 0;
}