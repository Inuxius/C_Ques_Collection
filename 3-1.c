#include <stdio.h>
#include <stdlib.h>
int binsearch(int x,int v[],int n);
int main()
{


}
int binsearch(int x,int v[],int n)
{int low,high,mid;
low=0;
high=n-1;
mid=(low+high)/2;
while(low<high&&v[mid]!=x)
{
if(v[mid]>x)
high=mid-1;
else
low=mid+1;
}
if(v[mid]==x)
return mid;
else
return -1;
}
