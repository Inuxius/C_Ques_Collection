#include <stdio.h>
#include <stdlib.h>
int Atoi(char s[]);
int lower(int c);
int Htoi(char s[]);
int main()
{

    int z;
    char s={'9','9','9','\0'};
    z=Htoi(s);
    printf("%d",z);

}
int Atoi(char s[])
{
    int n,i;
    n=0;
    for(i=0;s[i]!='\0'&&s[i]>='0'&&s[i]<='9';++i)
        n=10*n+(s[i]-'0');
    return n;
}
int lower(int c)
{
    if(c>='A'&&c<='Z')
        return c+'a'-'A';
}
int Htoi(char s[])
{
    int c,i,n=0;

    if(s[1]=='x'||s[1]=='X')
            s[1]=0;


    for(i=0;(c=s[i])!='\0';i++)
    {

        if((s[i]>='A'&&s[i]<='F'))
            n=16*n+(s[i]-'A'+10);
        else if(s[i]>='a'&&s[i]<='f')
            n=16*n+(s[i]-'a'+10);
        else if(s[i]>='0'&&s[i]<='9')
            n=16*n+(s[i]-'0');


    }
    printf("%d",n);
    return n;
}

