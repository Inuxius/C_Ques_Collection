#include <stdio.h>
#include <stdlib.h>
int strret(char s[],char t[]);
int main()
{
    int x,a={'a','b','c'},b={'a','b','c','d'};
    x=strret(b,a);
    printf("%d",x);

}
int strret(char s[],char t[])
{
    int i,j,v,n;
    for(i=0;t[i]!=EOF;i++);
    for(v=0;s[v]!=EOF;v++)
    {
        for(j=0;(s[v]!=t[j])!=EOF;j++);
        if(i!=j)
        {
            n=1;
            return j;

        }

    }
    if(n!=1)
    {
        return -1;
    }
}
