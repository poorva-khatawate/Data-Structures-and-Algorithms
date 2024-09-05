#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* getNode(int data) {
    struct Node* temp = malloc(sizeof(struct Node));
    if (temp == NULL) {
        printf("Memory not allocated\n");
        return NULL;
    }
    temp->data = data;
    temp->next = NULL;
    return temp;
}

// Function to insert a node at the end of the linked list
void insertAtEnd(struct Node** head, struct Node* temp) {
    // If the list is empty, make the new node the head
    if (*head == NULL) {
        *head = temp;
    } else {
        struct Node* cur = *head;
        // Traverse to the last node
        while (cur->next != NULL) {
            cur = cur->next;
        }
        // Link the new node at the end
        cur->next = temp;
    }
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* cur = head;
    while (cur != NULL) {
        printf("%d ", cur->data);
        cur = cur->next;
    }
    printf("\n"); // Print a newline at the end
}

int main() {
    struct Node* head = NULL; // Initialize the head to NULL
    int n;
    
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    
    int a;
    for (int i = 0; i < n; i++) {
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &a);
        struct Node* temp = getNode(a);
        insertAtEnd(&head, temp); // Pass the address of head to insert function
    }
    
    printf("The linked list is: ");
    printList(head); // Print the linked list
    return 0;
}
