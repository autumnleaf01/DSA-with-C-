#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};

void countofnodes(struct Node* head){
        int count = 0;
        if(head == NULL){
            printf("The linked list is empty\n");
        }
        else{
            struct Node* ptr = head;
            while(ptr!= NULL){
                printf("%d\n", ptr->data);
                count++;
                ptr = ptr->next;
            }
            printf("\nThe number of nodes in the linked list is: %d\n", count);
        }
    }

int main(){
    struct Node* head = NULL;
    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 10;
    head->next =NULL;

    struct Node* current = malloc(sizeof(struct Node));
    current->data = 20;
    current->next = NULL;
    head->next = current;

    struct Node* current2 = malloc(sizeof(struct Node));
    current2->data = 30;
    current2->next = NULL;
    head->next->next = current2;
    printf("%d\n", head->data);
    printf("%d\n", head->next->data);

    countofnodes(head);
    return 0;
}