#include <stdio.h>
#include <string.h>
#include "prog1.h"

int match_ends(int n, string words[])
{
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        if (strlen(words[i]) >= 2)
        {
            if(words[i][0] == words[i][strlen(words[i])-1])
            {
                x++;
            }
            
        }
    }

    return x;
}

int main()
{
    string szavak1[] = {"aba", "xyz", "aa", "x", "bbb"};
    int szavak1_meret = 5;

    // match_ends() meghívása itt...
    printf("%d\n", match_ends(szavak1_meret, szavak1));
    for (int i = 0; i < szavak1_meret; ++i)
    {
        puts(szavak1[i]);
    }

    return 0;
}