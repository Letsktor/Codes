#include <stdio.h>
#include <string.h>
int rfind_char(char s[], char c)
{
    int x=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]==c)
        {
            x=i;
        }
    }
    if(x==0)
    {
        x=-1;
    }

    return  x;
}
int main()
{
    printf("%d\n",rfind_char("Abba", 'b'));

}