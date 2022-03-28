#include <stdio.h>
int main()
{
    int e, kk, i = 2, j = 0;
    int lnko1[50];
    int lnko2[50];
    int dd;
    int lnko = 1;
    printf("Adj meg egy  egesz szamot:\n");
    scanf("%d", &e);
    printf("Adj meg  meg egy  egesz szamot:\n");
    scanf("%d", &kk);

    printf("Az %d primtenyezoi:\n", e);
    while (i <= e)
    {
        if (e % i == 0)
        {
            lnko1[j] = i;
            j++;
            e = e / i;
        }
        else
        {
            i++;
        }
    }
    for (i = 0; i < j; i++)
    {
        printf("%d\n", lnko1[i]);
    }
    i = 2;
    dd = j;
    j = 0;
    printf("A %d primtenyezoi:\n", kk);
    while (i <= kk)
    {
        if (kk % i == 0)
        {
            lnko2[j] = i;
            j++;
            kk = kk / i;
        }
        else
        {
            i++;
        }
    }

    for (i = 0; i < j; i++)
    {
        printf("%d\n", lnko2[i]);
    }
    int tt = 0;
    for (i = 0; i < dd; i++)
    {
        if (lnko1[i] == lnko2[tt])
        {
            lnko = lnko * lnko1[i];
            tt++;
        }
    }
    printf(" A ket szam legnagyobb kozos osztoja: %d\n", lnko);

    return 0;
}