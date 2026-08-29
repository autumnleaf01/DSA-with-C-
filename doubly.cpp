#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
struct Node{
    struct Node* prev;
    int data;
    struct Node* next;
};
struct Node* addNode(struct Node* head, int data){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->prev = NULL;
    temp->next = NULL;
    head = temp;
    return head;
}
struct Node* addNodeAtEnd(struct Node* head, int data){
    struct Node* temp, *tp;
    temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;
    if(head == NULL){
        head = temp;
    }
    else{
        tp = head;
        while(tp->next != NULL){
            tp = tp->next;
        }
        tp->next = temp;;
        temp->prev = tp;
    }
    return head;
}

int main(){
    struct Node* head = NULL;
    head = addNode(head, 10);
    cout<<head->data<<endl;
    addNodeAtEnd(head,20);
    cout<<head->next->data<<endl;
    return 0;
}