#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* link;
};


int main() {
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    if (head == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    head->data = 45;
    head->link = NULL;

    struct node *temp = NULL;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    temp->data = 43;
    temp->link = NULL;
    head->link = temp;

    // Print the linked list
    printList(head);

    // Free dynamically allocated memory
   // free(head);
    //free(temp);

    return 0;
}


// Function to print the linked list
void printList(struct node *head) {
    struct node *current = head;
    printf("List: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->link;
    }
    printf("\n");
}
