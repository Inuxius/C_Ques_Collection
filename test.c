#include<stdio.h>
#include<stdlib.h>
int main()
{
    char s[10]={'1','3','4','\0'};
    printf("%s",s);
    strrlen(&s[1]);

}
int strrlen(char *s)
{
    int n;
    for(n=0;*s!='\0';s++)
        n++;
    printf("%d",n);
}
