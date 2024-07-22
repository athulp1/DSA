#include<stdio.h>
int main()
{
    int n;
    int *ptr;
    printf("enter the number \n");
    scanf("%d",&n);


    ptr=&n;
    printf("the number u enter is %d",*ptr);

}
