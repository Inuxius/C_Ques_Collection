#include <stdio.h>
#include <stdlib.h>
int getline(char arr[]);
int main()
{
    int i,len,a,x;
    char arr[1000],z[1000];
    while((len=getline(arr))>0)
    {
        for(i=0;i<len;i++)
        {
            z[a]=arr[i];
            if(a==80)
            {
                if(z[a]=='\b'||z[a]=='\n'||z[a]=='\t')
                {
                    printf("%s",z);
                    a=0;
                    continue;
                }

                else{

                while(z[a]!='\b'||z[a]!='\t'||z[a]!='\n')
                    {a++;i--;}
                z[a]='\0';

                printf("%s",z);
                a=0;

                }
            }
        }
        if(a<80)
            printf("%s",z);
    }

}
int getline(char arr[])
{
    int c,i;
    while((c=getchar())!=EOF && c!='\n')
        arr[i]=c;
    if(c=='\n')
        arr[i++]='\n';
    arr[i++]='\0';
    return i;
}
