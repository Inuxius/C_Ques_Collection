#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int getline(char a[]);
void reverse(char a[],int len);
int main()
{
    int len;
    char a[1000];
    while((len=getline(a))>0)
    {

        reverse(a,len);
    }
}
int getline(char a[])
{
    int i,c;

  for(i=0;i<999 && (c=getchar())!=EOF && c!='\n';i++)
    a[i] = c;
  if( c == '\n')
  {
    a[i]=c;
    ++i;
  }
  a[i]='\0';

  return i;
}
void reverse(char a[],int len)
{
    int i;
    char s[1000];
    for(i=0;i<len-1;i++)
    {s[i]=a[len-1-i];}
    s[i]='\0';
    printf("%s",s);
}
