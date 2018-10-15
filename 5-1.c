#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{



}
int getint(int *pn)
{
    int c,sign;
    while((c=getch())==' '||(c=='\t'));
    if(!isdigit(c)&&c!=EOF&&c!='+'&&c!='-')
    {
        ungetch(c);
        return 0;
    }
    sign=(c=='-')?-1:1;
    if(c=='+'||c=='-')
        c=getch();
        if(isdigit(c))
            {for(*pn=0;isdigit(c);c=getch())
            *pn=10**pn+(c-'0');
        *pn*=sign;
        if(c!=EOF)
            ungetch(c);}
        else
        {
            ungetch(c);
        }
        return c;
}
int getfloat(double *pn)
{
    int c,l,sign,pow;
    while((c=getch())==' '||(c=='\t'));
    if(!isdigit(c)&&c!=EOF&&c!='+'&&c!='-'&&c!='.')
    {
        ungetch(c);
        return 0;
    }
    sign=(c=='-')?-1:1;
    if(c=='.')
        l=1;
    if(c=='+'||c=='-'||c=='.')
        c=getch();
        {if(isdigit(c))
            {for(*pn=0;isdigit(c);c=getch())
            {*pn=10**pn+(c-'0');
            if(l==1)
            pow*=10;}
            if(c=='.')
                {c=getch();
                for(*pn=0;isdigit(c);c=getch())
            {*pn=10**pn+(c-'0');
            pow*=10;}}


        *pn*=sign;
        *pn/=pow;
        if(c!=EOF)
            ungetch(c);}
        else
        {
            ungetch(c);
        }}
        return c;
}
