#include <stdio.h>
#include <stdbool.h>
bool valid_triangle(float n, float tt, float pp)
{
    if (n > 0 && tt > 0 && pp > 0)
    {
        if ((n + tt > pp) && (tt + pp > n) && (pp + n > tt))
        {
            return true;
        }
    }
}
int main()
{
    float n;
    float tt;
    float pp;
    printf("Adj meg egy pozitiv valos szamot(ez a haromszog elso oldala):\n");
    scanf("%f", &n);
    printf("Adj meg egy pozitiv valos szamot(ez a haromszog masodik oldala):\n");
    scanf("%f", &tt);
    printf("Adj meg egy pozitiv valos szamot(ez a haromszog harmadik oldala):\n");
    scanf("%f", &pp);
    if(tt>0 && n>0 && pp>0)
    {
    if (valid_triangle(n, tt, pp) == true)
    {
        printf("A haromszog megszerkesztheto.\n");
    }
    if (valid_triangle(n, tt, pp) == false)
    {
        printf("A haromszog nem megszerkesztheto.\n");
    }
    }
    else
    {
        printf("A szamok amiket megadtal nem megfeleloek.\n");
    }
    return 0;
}