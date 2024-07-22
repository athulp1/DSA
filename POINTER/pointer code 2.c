#include <stdio.h>

int main() {
    int *ptr; // Pointer declaration
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    ptr = &n; // Assigning the address of n to ptr
    printf("The number is %d", *ptr);

    *ptr=5;
    printf("The number is %d", *ptr);

    return 0;

}

