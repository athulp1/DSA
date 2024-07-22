#include<stdio.h>
#include<stdlib.h>

struct node{
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
    temp->data=54;
    temp->link=NULL;
    head->link=temp;



    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=90;
    temp->link=NULL;
    head->link->link=temp;


    list1(head);
    add(head,80);
    //list(head);
    //count(head);

}


void list1(struct node *head)
{
    struct node *ptr=head;
    if(head=NULL)
    {
        printf("sll is empty n \n");
    }
    else  {
    while(ptr!=NULL){

        printf("list is : %d \n",ptr->data);
        ptr=ptr->link;


    }


    }





}
void add(struct node *head,int data)
{
    struct node *temp,*ptr;
    ptr=head;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;

   while(ptr->link!=NULL)
        {
            ptr=ptr->link;

        }
         ptr->link=temp;


}
