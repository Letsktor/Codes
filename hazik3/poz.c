
#include <stdio.h>
void neg(int meret,int tomb[])
{
    for(int i=0;i<meret;i++)
    {
        if(tomb[i]>=0)
        {
            tomb[i]=tomb[i];
        }
        else
        {
            tomb[i]=(tomb[i]*-1);
        }
    }
}

int main()
{
    int meret = 5;
    int tomb[5] = {5, -22, 4, 4, 5};
    printf("Elso tomb:\n");
    for(int i=0;i<meret;i++)
    {
        printf("%d\n",tomb[i]);
    }
    neg(meret,tomb);
    printf("Masodik tomb:\n");
     for(int i=0;i<meret;i++)
    {
        printf("%d\n",tomb[i]);
    }

    return 0;
}