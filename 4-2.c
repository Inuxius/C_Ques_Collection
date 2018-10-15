#include <math.h>
#include <stdio.h>
#include <stdlib.h>
double Atof(char s[]);
int main()
{
char s[100];
gets(s);
printf("%lf",Atof(s));
}
double Atof(char s[])
{
    int i,sign,pow,sign2;
    double val,x;
    for(i=0;s[i]==' ';i++);
    sign=(s[i]== '-')?-1:1;
    if(s[i]=='+'||s[i]=='-')
        i++;
    for(val=0.0;isdigit(s[i]);i++)
        val=10*val+(s[i]-'0');
    if(s[i]=='.')
        i++;
    for(pow=1;isdigit(s[i]);i++)
        {pow=10*pow;
        val=10*val+(s[i]-'0');
        }
    if(s[i]=='e'||s[i]=='E')
        i++;
    sign2=(s[i]=='-')?-1:+1;
    if(s[i]=='+'||s[i]=='-')
        i++;
    for(x=0.0;isdigit(s[i]);i++)
        x=10.0*x+(s[i]-'0');

    return (sign*(val/pow)*(exp(sign2*x)));
}
