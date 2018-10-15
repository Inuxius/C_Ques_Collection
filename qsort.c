#include <stdio.h>
#include <stdlib.h>
int qqsort(int v[],int left,int right);
int swap(int v[],int i,int j);
void printArray(int arr[], int size);
int main()
{
    int arr[] = {60, 73, 28, 19, 71, 75};
    int n = sizeof(arr)/sizeof(arr[0]);
    qqsort(arr, 0, n-1);
    printf("Sorted array: n");
    printArray(arr, n);
    return 0;
}

int qqsort(int v[],int left,int right)
{
   int last,i;
   if(left>=right)
    return;
   swap(v,left,(left+right)/2);
   last=left;
   for(i=left +1;i<=right;i++)
        if(v[i]<v[left])
            swap(v,++last,i);

   swap(v,left,last);
   qqsort(v,left,last-1);
   qqsort(v,last+1,right);
}
int swap(int v[],int i,int j)
{
    int temp;
    temp=v[i];
    v[i]=v[j];
    v[j]=temp;
}
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("n");
}
