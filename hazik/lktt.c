#include <stdio.h>
int main()
{
    int e, kk, i = 2, j = 0;
    int lktt1[50];
    int lktt2[50];
    int dd;
    int lktt = 1;
    printf("Adj meg egy  egesz szamot:\n");
    scanf("%d", &e);
    printf("Adj meg  meg egy  egesz szamot:\n");
    scanf("%d", &kk);

    printf("Az %d primtenyezoi:\n", e);
    while (i <= e)
    {
        if (e % i == 0)
        {
            lktt1[j] = i;
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
        lktt = lktt * lktt1[i];
        printf("%d\n", lktt1[i]);
    }
    i = 2;
    dd = j;
    j = 0;
    printf("A %d primtenyezoi:\n", kk);
    while (i <= kk)
    {
        if (kk % i == 0)
        {
            lktt2[j] = i;
            j++;
            kk = kk / i;
        }
        else
        {
            i++;
        }
    }
    int cp = 1;
    for (i = 0; i < j; i++)
    {
        lktt = lktt * lktt2[i];
        printf("%d\n", lktt2[i]);
    }
    int tt = 0;
    for (i = 0; i < dd; i++)
    {
        if (lktt1[i] == lktt2[tt])
        {
            cp = cp * lktt1[i];
            tt++;
        }
    }
    printf(" A ket szam legkisebb kozos tobbszorose: %d\n", (lktt / cp));
    return 0;
}