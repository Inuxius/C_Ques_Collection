#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Printing a histogram\n");
    int arr[256],c,max,i,l;
    for(i=0;i<256;i++)
    {arr[i]=0;}
    while((c=getchar())!='\n')
    {

        arr[c]++;

    }

    for(i=0;i<256;i++)
    {

        if(arr[i]>max)
        {
            max=arr[i];
            l=i;
        }
    }

while(max>0)
    {for(i=0;i<256;i++)
    {
        if(arr[i]<max)
            {
                printf(" ");
            }
        else
        {
            printf("*");
        }
    max--;
    }
printf("\n");
}
}
