#include <stdio.h>
#include <stdlib.h>
 int main()
 {
     char c;
     while((c=getchar())!='\0')
           {
               if(c==' ')
            {
                printf("\n");
                continue;
            }
               printf("%c",c);
           }
 }
