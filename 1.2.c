#include <stdio.h>
int main()
{
    char c;
    int x=0;
    while((c=getchar())!=EOF){
        while((c=getchar())!=' ')
            x++;
        if(x!=0)
           putchar(' ');
        putchar(c);
    }


}
