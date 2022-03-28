#include <stdio.h>

int main()
{
    int ma;
    printf("Add meg a haromszogek magassagat:\n");
    scanf("%d", &ma);
    for (int i = 1; i <= ma; i++)
    {
        for (int k =0 ; k <ma-i; k++)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf(" ");
        printf(" ");
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}