#include<stdio.h>
int main()
{
    int n,i;
    int seen[10];
    printf("enter the number \n");
    scanf("%d",&n);

    int rem;
    while(1)
    {
        rem=n%10;
        if(seen[rem]==1)
            break;
            seen[rem]=1;
            n=n/10;


    }


    if(n>0)
    {
        printf("yes");

    }

    else
    {
        printf("no\n");
    }


}
