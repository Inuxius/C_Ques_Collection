#include <stdio.h>
#include <stdlib.h>
#define MAXLEN 100
#include <string.h>
int readlines(char *lineptr[],int maxlines,char *p);
int main()
{

}
int readlines(char *lineptr[],int maxlines,char *p)
{
    int len,nlines;
    char line[MAXLEN];
    nlines=0;
    while((len=getline(line,MAXLEN))>0)
        if(nlines>=maxlines||len>strlen(p))
            return -1;
        else
        {
            line[len-1]='\0';
            strcpy(p,line);
            lineptr[nlines++]=p;
        }
    return nlines;
}
