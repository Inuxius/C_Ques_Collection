#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ALLOCSIZE 10000

static char allocbuf[ALLOCSIZE];
static char *allocp=allocbuf;
char *alloc(int n)
{
    if(allocbuf+ALLOCSIZE-allocp>=n)
        {allocp+=n;
        return allocp-n;}
    else
    {
        return 0;

    }
}

void afree(char *p)
{
    if(p>=allocbuf&&p<allocbuf+ALLOCSIZE)
        allocp=p;
}
void lstrcpy(char *s,char *t)
{
    while(*s++=*t++);
}
int lstrcmp(char *s,char *t)
{

    for(;(*s==*t)!='\0';s++,t++);
    return *s-*t;
}
int lstrcat(char *s,char *t)
{
    while(*s!='\0')
        s++;
    while((*s++=*t++)!='\0');
}
int lstrend(char *s,char *t)
{
    while(*s!=*t)
        {if(*s=='\0')
        return 0;s++;}


    while((*s++==*t++))
        {if(*t=='\0')
        return 1;
        else
            return 0;
}}
int lgetline(char *s)
{
    int i;
    while((*s++=getchar())!=EOF)
            i++;
    return i;
}
int Atoi(char *s)
{
    int x;
    while(*s++==' '||'\t');
    while(isdigit(*s))
        {x=10*x+(*s-'0');s++;}
    return x;

}
char *Itoa(int a)
{

    char x[100];
    char *s=x;
    do
    {
        *s++=a%10+'0';
    }
    while(a/=10);
    return s;
}
char *reverses(char *s)
{
    int c;
    char *t;
    for(t=strlen(s)+1;s<t;s++,t--)
    {
        c=*s;
        *s=*t;
        *t=*s;
    }
}
