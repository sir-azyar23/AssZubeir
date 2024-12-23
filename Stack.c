#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* head = NULL;

void frontInsertion() {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));

    printf("Enter element to insert at the front portion:\n");
    scanf("%d", &newnode->data);
    newnode->next = head;  
    head = newnode;        
}

void backInsertion() {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    struct node* temp;

    if (head == NULL) {
        frontInsertion();  
    } else {
        printf("Enter element to insert at the back portion:\n");
        scanf("%d", &newnode->data);
        newnode->next = NULL;  

        temp = head;
        while (temp->next != NULL) {  
            temp = temp->next;
        }

        temp->next = newnode;  
    }
}

void linkedListTraversal(struct node* ptr) {
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);  
        ptr = ptr->next;
    }
    printf("NULL\n");  
}

int main() {
    
    frontInsertion();   
    backInsertion();    
    frontInsertion();
	backInsertion();
	frontInsertion();
	backInsertion();   

    printf("Linked List Traversal:\n");
    linkedListTraversal(head);  

    return 0;
}
