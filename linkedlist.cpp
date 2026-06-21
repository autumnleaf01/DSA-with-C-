#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
class LinkedList{  
public: 
    Node* head;
    Node* tail;
public:
    LinkedList(){
        head = NULL;
        tail = NULL;
    }
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }
    void printList(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    bool detectLoop(Node* head){
        Node* slow = head;
        Node* fast = head;
        while(fast!= NULL && slow!= NULL){
            slow = slow->next;    Node* next;
            fast = fast->next;   
            if(slow == fast){
                cout<<"Cycle detected"<<endl;
                return true;
            }
        }
         cout<<"No cycle detected"<<endl;
         return false;
    }
};

int main(){
    LinkedList list;
    list.push_front(10);
    list.push_front(20);
    list.push_front(30);
    list.push_front(40);
    list.tail= list.head;
    list.printList();
    list.detectLoop(list.head);
    return 0;
}