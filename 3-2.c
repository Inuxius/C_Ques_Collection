#include<stdio.h>
#include<stdlib.h>
void shellsort(int v[],int n);
void escape(char s[],char t[]);
void expand(char s1[],char s2[]);
int main()
{
    char s[1000],t[1000];
    gets(s);

    expand(s,t);

    printf("%s",t);

}
void shellsort(int v[],int n)
{
    int gap,i,j,temp;
    for(gap=n/2;gap>0;gap/=2)
        for(i=gap;i<n;i++)
            for(j=i-gap;j>=0&&v[j]>v[j+gap];j-=gap)
                {temp=v[j];
                v[j]=v[j+gap];
                v[j+gap]=temp;
                }

}
void escape(char s[],char t[])
{
    int i,a;
    while(s[i]!=EOF)
    {
        if(s[i]=='\n')
        {
            t[a++]='\\';
            t[a++]='n';
            i++;
            continue;
        }
        else if(s[i]=='\t')
        {
            t[a++]='\\';
            t[a++]='t';
            i++;
            continue;
        }
        else
        {t[a]=s[i];
        a++;
        i++;
        }
    }
}
void expand(char s[],char t[])
{
    int i=0,a=0;
    for(i=0;s[i]!=EOF;i++)
    {
        if(s[i]=='-'&&i-1!=-1||s[i+1]!=EOF)
        {
            if((s[i-1]>='a'&&s[i-1]<='z')&&(s[i+1]>='a'&&s[i+1]<='z'))
            {
                while(t[a+1]!=s[i+1])
                {
                    t[a+1]=t[a]+1;
                    a++;
                }
            }
            else if((s[i-1]>='0'&&s[i-1]<='9')&&(s[i-1]>='0'&&s[i-1]<='9'))
            {
                while(t[a+1]!=s[i+1])
                {
                    t[a+1]=t[a]+1;
                    a++;
                }
            }
        }
    }
}
