#include <stdio.h>
#include <stdlib.h>
int strindex(char s[],char t[]);
int len(char t[]);
int main()
{
    int m;
    char s[100],t[100];
    gets(s);
    gets(t);
    m=strindex(s,t);
    printf("%d",m);
}
int len(char t[])
{
    int i;
    for(i=0;t[i]!='\0';i++);
    printf("%d\n",i+1);
    return i;
}
int strindex(char s[],char t[])
{

   int i,x,a=0,z=0;
   for(i=0;s[i]!=t[a]&&s[i]!=EOF;i++);
    a++;
    x=i;
    if(s[i]==EOF)
    return -1;
    else
    {
        while(s[i++]==t[a++]&&s[i]!=EOF&&t[i]!=EOF)
            z++;
        if(z==len(t)-1)
            return x;
    }

}
