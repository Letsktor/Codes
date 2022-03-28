#include <stdio.h>
#include <string.h>
void line(char c, int length)
{
    for(int i=0;i<length;i++)
    {
        if(i==length-1)
        {
            printf("%c\n");
        }
        else
        {
            printf("%c");
        }
    }
}
int main()
{
    printf("hello\n");
    line('-', 40);
    printf("world\n");
    
}