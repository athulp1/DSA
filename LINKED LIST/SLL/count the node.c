#include<stdio.h>
#include<stdlib.h>

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
    temp=(struct node *)malloc(sizeof(struct node ));
    temp->data=50;
    temp->link=NULL;
    head->link=temp;


    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=40;
    temp->link=NULL;
    head->link->link=temp;


    list(head);
    count(head);


    }

 void list(struct node *head)
 {
     struct node *current=head;
     printf("list :");
     while(current !=NULL)
     {
         printf("%d",current->data);
         current=current->link;
          printf("\n");
     }

 }

void count(struct node *head)
{
    int count=0;
    if(head==NULL)
    {
        printf("LL is empty");

    }
    else {
        //struct node *ptr=NULL;
        //ptr=head;
        struct node *ptr=head;
        while(ptr!=0)
        {
         count++;
         ptr=ptr->link;
        }
        printf(" the count is : %d",count);
    }
}









