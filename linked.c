#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct node
    {
        int val;
        struct node* next;
    };
    struct node* ptr;
    struct node* head=NULL;
    struct node* one=NULL;
    struct node* second=NULL;
    struct node* third=NULL;
    one=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    head=one;
    one->val=10;
    second->val=20;
    third->val=30;
    one->next=second;
    second->next=third;
    third->next=NULL;
    ptr=head;

    while(ptr->next!=NULL)
    {printf("%d\n%d\n",ptr->next,ptr->val);
    ptr=ptr->next;}
    if(ptr->next==NULL)
    {
        printf("%d",ptr->val);   }

}
