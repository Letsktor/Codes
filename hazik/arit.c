#include <stdio.h>
int main()
{
    int e;
    int k;
    float ee,kk;
    char me;
    printf("Adj meg  egy arimetikai muveletet(pl:+,-,/,*):\n");
    scanf("%s", &me);
    printf("Adj meg egy  egesz szamot:\n");
    scanf("%d", &e);
    printf("Adj meg  meg egy  egesz szamot:\n");
    scanf("%d", &k);
    if (me == '+')
    {
        printf("A ket szam osszege: %d.\n", (e + k));
    }
    if (me == '-')
    {
        printf("A ket szam kulonbsege: %d.\n", (e - k));
    }
    if (me == '*')
    {
        printf("A ket szam szorzata: %d.\n", (e * k));
    }
    if (me == '/')
    {
        ee=e;
        kk=k;
        printf("A ket szam hanyadosa: %.4f.\n", ee / kk);
    }

    return 0;
}