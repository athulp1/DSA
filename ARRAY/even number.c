#include<stdio.h>
int main()
{
    int n,i ,search_number, found = 0;
    //int a[n];
    printf("enter size of array\n");
    scanf("%d",&n);
int a[n];
    for(i=0;i<n;i++)
    {
        printf("enter the number %d index",i+1);
        scanf("%d",&a[i]);
    }


     for(i=0;i<n;i++)
    {

        printf("%d",a[i]);
    }

printf("\nEven numbers in the array: ");
    for (i = 0; i < n; i++)
        {
        if (a[i] % 2 == 0)
            printf("%d ", a[i]);
    }

    printf("\nOdd numbers in the array: ");
    for (i = 0; i < n; i++)
        {
        if (a[i] % 2 != 0)
            printf("%d ", a[i]);
    }
printf("\nEnter the number to search for: ");
    scanf("%d", &search_number);

    printf("\nPositions of %d in the array: ", search_number);
    for (i = 0; i < n; i++) {
        if (a[i] == search_number) {
            printf("%d ", i + 1);
            found = 1;
        }
    }

    if (!found) {
        printf("The number %d is not found in the array.\n", search_number);
    }



}
