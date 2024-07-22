#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Declaring an array of the given size
    int array[n];

    // Prompting the user to enter the elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Printing the elements of the array
    printf("The elements of the array are:\n");
    for (int i = 0; i <n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

