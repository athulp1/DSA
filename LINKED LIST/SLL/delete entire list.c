#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

void add_at_end(struct node *head, int data);
struct node* del(struct node *head);
void list(struct node *head);

int main() {
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *temp = NULL;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = 47;
    temp->link = NULL;
    head->link = temp;

    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = 57;
    temp->link = NULL;
    head->link->link = temp;

    printf("Before deleting\n");
    list(head);

    add_at_end(head, 80);
    list(head);

    head = del(head);

    if (head == NULL) {
        printf("Linked list deleted successfully\n");
    }

    list(head);

    return 0;
}

void add_at_end(struct node *head, int data) {
    struct node *ptr, *temp;
    ptr = head;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    while (ptr->link != NULL) {
        ptr = ptr->link;
    }
    ptr->link = temp;
}

struct node* del(struct node* head) {
    struct node *temp1 = head;
    while (temp1 != NULL) {
        temp1 = temp1->link;
        free(head);
        head = temp1;
    }
    return head;
}

void list(struct node *head) {
    struct node *ptr1 = head;
    if (head == NULL) {
        printf("List is empty\n");
    } else {
        while (ptr1 != NULL) {
            printf("%d\n", ptr1->data);
            ptr1 = ptr1->link;
        }
    }
}
