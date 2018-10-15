#include <stdio.h>
#include <stdlib.h>
void squeeze(char s[],char t[]);
int main()
{
    char l={'A','B','\0'},n={'B','\0'};
    squeeze(l,n);
    printf("%s",l);


}
void squeeze(char s[],char t[])
{
    int i,j,a=0;
    for(i=0;s[i]!='\0';i++)
    {
        for(j=0;t[j]!='\0';j++)
        {
            if(s[i]==t[j])
            {
                break;
            }

        }
        if(t[j]=='\0')
            s[a++]=s[i];
    }
    s[a]='\0';
}
