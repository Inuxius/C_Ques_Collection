#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#define MAXOP 100
#define NUMBER '0'
#define BUFSIZE 100
#define MAXVAL 100
#define func 2
char buf[BUFSIZE];
int bufp=0;
int sp=0;
double val[MAXOP];
void push(double);
double pop(void);
int getop(char s[]);
int getchw(void);
void ungetchw(int);
void funcx(char s[]);
void ungets(char s[]);
int main()
{
    int type,var=0;
    double op2,temp,a,v;
    char s[MAXOP];
    double variable[26];

    while ((type=getop(s))!=EOF)
    {
        switch(type)
        {
        case NUMBER:
            push(atof(s));
            break;
        case '+':
            push(pop()+pop());
            break;
        case '*':
            push(pop()*pop());
            break;
        case '-':
            op2=pop();
            push(pop()-op2);
            break;
        case '/':
            op2=pop();
            if(op2!=0.0)
                push(pop()/op2);
            break;
        case '%':
            op2=pop();
            if(op2!=0.0)
                push(fmod(pop(),op2));
            break;
        case func:
            funcx(s);
            break;
        case '\n':
            printf("\t%.8g\n",pop());
            break;
        case 't':
            printf("\t%.8g\n",val[sp-1]);
            break;
        case 'd':
            val[sp++]=val[sp-1];
            break;
        case 's':
            temp=pop();
            a=pop();
            push(temp);
            push(a);
            break;
        case 'f':
            sp=0;
            break;
        case '=':
                        pop();
                        if(var>='A' && var <='Z')
                            variable[var-'A']=pop();
                        else
                            printf("error: novariablename\n");
                            break;
        default:
            if(type>='A' && type<='Z')
                            push(variable[type-'A']);
                        else if(type =='v')
                            push(v);
            printf("error: unknown command %s\n",s);
            break;


        }
        var=type;
    }return 0;


}
void push(double f)
{
    if(sp<MAXVAL)
        val[sp++]=f;
    else
        printf("error: stack full can't push%g\n",f);

}
double pop(void)
{
    if(sp>0)
        return val[--sp];
    else
        {printf("error: stack empty\n");
        return 0.0;}
}
int getop(char s[])
{
    int i,c;
    while((s[0]=c=getchw())==' '||c=='\t');
    s[1]='\0';

    i=0;

   if(islower(c))
    {
        while(islower(s[++i]=c=getchw()));
            ;
        s[i]='\0';
        if(c!=EOF)
            ungetchw(c);
        if(strlen(s)>1)
            return func;
        else
            return c;
    }



    if(!isdigit(c)&&c!='.'&&c!='-')
        return c;

    if(c=='-')
    {
        if(isdigit(s[++i]=c=getchw())||c=='.')
        {
           while(isdigit(s[++i]=c=getchw()));}
        else
        {
            if(c!=EOF)
            {
                ungetchw(c);
                return '-';
            }
        }
    }

    if(isdigit(c))
        while(isdigit(s[++i]=c=getchw()));
    if(c=='.')
        while(isdigit(s[++i]=c=getchw()));
    s[i]='\0';
    if(c!=EOF)
        ungetchw(c);
    return NUMBER;
}
int getchw(void)
{
    return (bufp>0)?buf[--bufp]:getchar();
}

void ungetchw(int c)
{
    if(bufp>=BUFSIZE)
        printf("ungetch : too many characters");
    else
        buf[bufp++]=c;
}
void funcx(char s[])
{
    double op2;

    if(strcmp(s,"sin")==0)
        push(sin(pop()));
    else if(strcmp(s,"cos")==0)
        push(cos(pop()));
    else if(strcmp(s,"exp")==0)
        push(exp(pop()));
    else if(strcmp(s,"pow")==0)
    {
        op2 = pop();
        push(pow(pop(),op2));
    }
    else
        printf("error: %s is not supported\n",s);
}
void ungets(char s[])
{
    int i=strlen(s);
    while(i>0)
        ungetchw(s[--i]);

}
