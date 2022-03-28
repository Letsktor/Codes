#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ss = 1;
    int i = 0;
    int d = 0;
    int x = 0;
    int xd = 0;
    int cc[100];
    printf("Adj meg egesz szamokat az  [1,99] intervallumon 0 vegjelig\n");

    while (ss != 0)
    {
        printf("Szam:");
        scanf("%d", &ss);
        if (ss < 0 || ss > 99)
        {
            printf("Ez a szam kivul esik az elfogadhato intervallumon.\n");
        }

        else
        {

            for (int j = 0; j < i; j++)
            {
                if (cc[j] == ss)
                {
                    x = 1;
                }
            }
            if (x == 0)
            {
                cc[i] = ss;
                i++;
                d++;
            }
            x=0;
        }
        xd++;
    }
    int csere;
    for(int j=0;j<d;j++)
    {
        for(int k=0;k<i;k++)
        {
            if(cc[j]<cc[k])
            {
                csere=cc[k];
                cc[k]=cc[j];
                cc[j]=csere;
            }

        }
    }


    if (xd != 0)
    {
        printf("%d kulonbozo szam lett megadva\n", d);
        printf("Ezek a szamok(novekvo sorrendben):\n");
        for (int j = 1; j < d; j++)
        {
            if (j == d-1)
            {
                printf(" %d\n", cc[j]);
            }
            else
            {
                printf(" %d,", cc[j]);
            }
        }
    }

    return 0;
}