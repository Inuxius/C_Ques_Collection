#include <stdio.h>
#include <stdlib.h>
int getline(char arr[]);
int main()
{
    char arr[1000];
    int x,i;
    for(i=0;i<999;i++)
        arr[i]=' ';
    while((x=getline(arr))!=1)
    {
        if(x>8)
        {
            printf("%s",arr);
        }
    }

}
int getline(char arr[])
{
   int i=0;
   char c;
   while((c=getchar())!='+')
   {
       arr[i]=c;
       if(c=='\n')
       {
           break;
       }
       i+=1;
   }
   return i+1;
}
