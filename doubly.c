#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[20];
    int roll;
    char Dept[10];
    struct student* next;
};
struct student *head=NULL;
void insert(struct student* ptr)
{
        struct student *x;
        if (head==NULL)
            {head=ptr;
            ptr->next=head;

            }
        else
        {
            x=head;
            while(x->next!=head) x=x->next;
            x->next=ptr;
            ptr->next=head;
            head=ptr;

        }

}
void deletion()
{
    struct student* ptr;
    if(head==NULL)
    {
        printf("Underflow");
    }
    else
    {
        ptr=head;
        while(ptr->next->next!=head)
            ptr=ptr->next;
        ptr->next=head;

    }
}
int main()
{
    int i,a,n;
    printf("The number of students ");
    scanf("%d",&n);
    struct student* ptr,*x;
    for(i=0;i<n;i++)
    {
        ptr=(struct student*)malloc(sizeof(struct student));
        scanf("%s",ptr->name);
        scanf("%d",&ptr->roll);
        scanf("%s",ptr->Dept);
        ptr->next=NULL;
        //ptr->prev=NULL;
        if(i==0)
        {
            head=ptr;
            ptr->next=head;

        }
        else
        {
            x=head;
            while(x->next!=head)
                x=x->next;
            x->next=ptr;
            ptr->next=head;

        }
    }
    i=1;
    while(i!=0){
    printf("1.INSERT AT HEAD OF CIRCULAR LINKED LIST\n");
    printf("2.DELETE AT END OF CIRCULAR LINKED LIST\n");
    printf("3.EXIT\n");
    scanf("%d",&a);
    switch(a)
    {
    case 1:
        ptr=(struct student*)malloc(sizeof(struct student));
        scanf("%s",ptr->name);
        scanf("%d",&ptr->roll);
        scanf("%s",ptr->Dept);
        ptr->next=NULL;

        insert(ptr);
        break;
    case 2:
        deletion();
        break;
    case 3:
        i=0;
        break;
    default:
        printf("U.F.O\n");
        break;
    }
    ptr=head;
    while(ptr->next!=head)
    {printf("%s\n%d",ptr->name,ptr->roll);
    ptr=ptr->next;}
    printf("%s\n%d",ptr->name,ptr->roll);
    //ptr=ptr->next;

}
}
