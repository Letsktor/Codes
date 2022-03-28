#include <stdio.h>
#include <stdbool.h>
bool fv(int meret, int tomb[])
{
    for (int i = 0; i < meret; i++)
    {
        if(tomb[i]>tomb[i+1])
            {return false; break;}
    }
    return true;
}
int main()
{
    int meret = 5;
    int tomb[5] = {1, 2, 3, 4, 5};
    if(fv(meret, tomb)==true)
    {
        printf("A tomb sorba van rendezve.\n");
    }
     if(fv(meret, tomb)==false)
    {
        printf("A tomb nincs sorba rendezve.\n");
    }
    

    return 0;
}