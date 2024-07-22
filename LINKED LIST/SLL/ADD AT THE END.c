#include<Stdio.h>
#include<Stdlib.h>
struct node {
int data;
struct node *link;
};
int main()
{
    struct node *head=NULL;
        head=(struct node *)malloc(sizeof(struct node));
        head->data=45;
        head->link=NULL;

     struct node *temp=NULL;
         temp=(struct node *)malloc(sizeof(struct node));
         temp->data=47;
         temp->link=NULL;
             head->link=temp;

    temp=(struct node *)malloc(sizeof(struct node));
         temp-> data=57;
         temp->link=NULL;
         head->link->link=temp;

add_at_end(head,80);
list(head);



}

void add_at_end(struct node *head,int data)

{
    struct node *ptr,*temp;
ptr=head;
temp=(struct  node *)malloc(sizeof(struct node));
temp->data=data;
temp->link=NULL;
while(ptr->link != NULL)

{
    ptr=ptr->link;

}
ptr->link=temp;

}

void list(struct node *head)
{
    struct node *ptr1=head;
    if(head==NULL)
    {
        printf("%d",ptr1->data);
    }

    else
    {
        while(ptr1!=NULL)
        {
            printf("%d",ptr1->data);
            ptr1=ptr1->link;
            printf("\n");

        }
    }

}

