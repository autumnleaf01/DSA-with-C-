#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
void insertAtEnd(struct Node* head, int data){
    struct Node* ptr = new struct Node;
    ptr->data = data;
    ptr->next = NULL;
    struct Node* p = head;
    while(p->next != NULL){
        p = p->next;
    }
    p->next = ptr;
}

    void del_first(struct Node* head){
        if(head == NULL){
            printf("List is empty");
            return;
        }
        struct Node* temp = head;
        head = head->next;
        free(temp);
        temp = NULL;
    }


int main(){
    struct Node* head = new struct Node;
    head->data = 10;
    head->next = NULL;
    insertAtEnd(head, 20);
    printf("%d", head->next->data);
    return 0;
}