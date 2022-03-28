
#include <stdio.h>
double felszin(double n)
{

    return 4 * n * n * (22.0 / 7.0);
}
double terfogat(double n)
{

    return (4 * n * n * n * (22.0 / 7.0)) / 3.0;
}
int main()
{
    double r;

    printf("Add meg a gomb sugarat:\n ");
    scanf("%lf", &r);

    printf("A gomb felszine: %.3lf a gomb terfogata pedig:%.3lf\n", felszin(r), terfogat(r));

    return 0;
}