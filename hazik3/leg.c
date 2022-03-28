#include <stdio.h>
int legn(int meret, int tomb[])
{
    int max=tomb[0];
    for(int i=0;i<meret;i++)
    {
        if(tomb[i]>=max)
        {
            max=tomb[i];
        }
    }
return max;
}
int legk(int meret, int tomb[])
{
    int min=tomb[meret];
    for(int i=0;i<meret;i++)
    {
        if(tomb[i]<=min)
        {
            min=tomb[i];
        }
    }
return min;
}

int main()
{
    int meret = 5;
    int tomb[5] = {5, 2, 4, 4, 5};
  printf("A tomb legynagyobb eleme %d es a legkisebb %d.\n",legn(meret,tomb),legk(meret,tomb));

    return 0;
}