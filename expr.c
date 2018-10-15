#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NUM 100
float value[NUM];
float *x=value;
int top=0;
void push(float);
float pop(void);
int main(int argc,char *argv[])
{
    int m=0;
    float op2;
    while(**++argv!=NULL)
    {
        if(**argv==' '||**argv=='\t')
            continue;
        if(isdigit(**argv))
            *(x++)=**argv;
        else
            switch(**argv)
        {
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
            if(op2!=0)
                push(pop()/op2);
            else
                printf("zero division error\n");
            break;
        default:
            printf("unknown operator\n");
            m+=1;
            break;
        }

    if(m!=0)
        break;
    }


}
void push(float a)
{
    if(top<NUM)
    {*(x++)=a;
    top++;}
    else
    {
        printf("OVERFLOW\n");
    }
}
float pop(void)
{
    if(top>=0)
            return *(x--);
    else
        printf("Underflow\n");

}
