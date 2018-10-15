#include <stdio.h>
#include <stdlib.h>
#define spaces 4
int detab(int arr[]);
int main()
{
    int arr[1000];
    char c;
    int i;
    while((c=getchar())!=EOF)
    {
        arr[i]=c;
        i+=1;
        if(c=='\n')
        {
            detab(arr);
            i=0;
        }
    }

}
int detab(int arr[])
{
    int a=0,i,c=0;
    int x[1000];
    for(i=0;i<999;i++)
    {
        x[i]=' ';
    }
    while(arr[c]=='\n')
    {

        if(arr[c]=='\t')
        {
            for(i=0;i<spaces;i++)
            {

                x[a]='\b';
                a+=1;


            }
        }
        else
        {
            x[a]=arr[c];

        }
        a+=1;
        c+=1;

    }
printf("%s\n",x);
}
