#include<stdio.h>
int main()
{
    int i,*q;
    int *p;
     i=1;
     *p=&i;
    q=p;
    *q=5;
    printf("%d",*p);

}
