#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int val;
    struct stack * next;
}*head=NULL;
void push(int val)
{

    struct stack * ptr;
    ptr=(struct stack*)malloc(sizeof(struct stack));
    ptr->val=val;
    ptr->next=NULL;
    if (head==NULL)
        head=ptr;
    else
    {
        ptr->next=head;
        head=ptr;
    }

}
int pop()
{
    if(head==NULL)
        printf("UNDERFLOW\n");
    else
    {
        printf("%d",head->val);
        head=head->next;
    }
}
int main()
{
    int i=0,a,z;
    struct stack * ptr;
    while(i==0)
    {
        printf("1.Push\n2.Pop\n3.Peek\n4.Display\n5.exit\nYour Choice ");
        scanf("%d",&a);
        switch(a)
        {
        case 1:
            scanf("%d",&z);
            push(z);
            break;
        case 2:
            printf("%d\n",pop());
            break;
        case 3:
            printf("%d\n",head->val);
            break;
        case 4:
            ptr=head;
            while(ptr!=NULL)
            printf("%d\n",ptr->val);
            break;
        case 5:
            i=1;
            break;

        }
    }
}
