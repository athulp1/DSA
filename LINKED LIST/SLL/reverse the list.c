#include<stdio.h>
#include<stdlib.h>

struct node {
int data;
struct node *next;
};

int main()
{
    int n,number,i;

    printf("enter the node \n");
    scanf("%d",&n);



    struct node *head=NULL;
    head=(struct node *)malloc(sizeof(struct node));
    head->data=number;
    head->next=NULL;

}
