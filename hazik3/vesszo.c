
#include <stdio.h>
void vesszo(int meret, int tomb[])
{
    for(int i=0;i<meret;i++)
    {
        if(i==0)
        {
            printf("%d,",tomb[i]);
        }
         if(i>0 && i<meret-1)
        {
            printf(" %d,",tomb[i]);
        }
         if(i>0 && i==meret-1)
        {
            printf(" %d\n",tomb[i]);
        }

    }
}

int main()
{
    int meret = 5;
    int tomb[5] = {5, 2, 4, 4, 5};
    vesszo(meret,tomb);

    return 0;
}