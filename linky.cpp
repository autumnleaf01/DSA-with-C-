#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;

    public:
    Node* head = NULL;
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    
    void Insertfront(int data1, Node* next1){
        Node* temp = new Node(data1, next1);
        if (head == NULL){
            head = temp;
        }
        else {
            temp->next = head;
            head = temp;
        }
    }
};

int main(){
    Node* head = new Node(1, NULL);
    head->Insertfront(2, NULL);
    cout<<head->data<<endl;

}