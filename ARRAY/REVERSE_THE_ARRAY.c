#include<stdio.h>

int main()
{
    int i,n;
    int a[n];
    printf("enter 5 number to repeat\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("enter the %d index number",i);
        scanf("%d",&a[i]);
    }

    for(i=n;i>=0;i--)
    {
        printf("the number are ");
        printf("%d\n",a[i]);
    }


}



