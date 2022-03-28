#include <stdio.h>
#include <string.h>
int char_count(char s[], char c)
{
    int x=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]==c)
        {
            x=x+1;
        }
    }

    return  x;
}
int main()
{
    printf("%d\n",char_count("Abba", 'b'));

}