#include <stdio.h>
#include <stdlib.h>
int getline(char arr[]);
int main()
{
    char arr[1000];
    int x,i;
    for(i=0;i<999;i++)
        arr[i]=' ';
    while((x=getline(arr))>0)
    {
        printf("%s",arr);
        while(arr[i]!='\n')
            i++;
        --i;
        while((arr[i]==' ')||(arr[i]=='\t'))
            i--;
        if(i>=0)
        {
            arr[i]='\0';
            printf("%d%s\n",i,arr);


        }


    }

}
int getline(char arr[])
{
   int i=0;
   char c;
   while((c=getchar())!=EOF||c!='\n')
   {
       arr[i]=c;
       ++i;
       }

       if(c=='\n')
       {
           arr[++i]='\n';
           arr[++i]='\0';
                  }



   return i;
}
