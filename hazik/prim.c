#include <stdio.h>
int main()
{
    int i = 2;
    int e;
    int x = 0;
    printf("Adj meg egy  egesz szamot:\n");
    scanf("%d", &e);

    while (i < e)
    {
        if (e % i == 0)
        {
            x = 1;
            break;
        }
        i++;
    }

    if (x == 0 && e != 0 && e != 1)
    {
        printf("A(z) %d primszam.\n", e);
    }
    else
    {
        printf("A(z) %d nem primszam.\n", e);
    }

    return 0;
}