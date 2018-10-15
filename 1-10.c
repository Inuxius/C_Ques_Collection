#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    while((c=getchar())!='\0')
    {
        if(c=='\t')
        {
            printf("\\");
            printf("t");
            continue;
        }
        else if(c==' ')
        {
            printf("\\");
            printf("b");
            continue;
        }
        else if(c=='\\')
        {
            printf("\\");
            printf("\\");
            continue;
        }
        putchar(c);
    }
}
