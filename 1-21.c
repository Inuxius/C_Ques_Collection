#include <stdio.h>
#include <stdlib.h>
#define spaces 4
int getline(char arr[]);
int main()
{
    int i,x=0,len,a=0;
    char arr[1000],z[1000];
    while((len=getline(arr))>0)
    {
        for(i=0;i<len;i++)
        {
            if(arr[i]==' ')
            {while(arr[i]==' ')
                {
                    i++;
                    x++;
                if(x==4)
                {
                    z[a++]='\\';
                    z[a]='t';
                    a++;
                    x=0;
                }}
            if(x<4)
                {
                    while(x--)
                        z[a++]=' ';
                }
            }
            else
            {
                z[a]=arr[i];
                a++;
            }



        }

    printf("%s",z);
    }

}
int getline(char arr[])
{
    int c,i=0;
    while((c=getchar())!=EOF&&c!='\n')
        {arr[i]=c;
        i+=1;}
    arr[i]='\n';
    arr[++i]='\0';
    return i;
}
