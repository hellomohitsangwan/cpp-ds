#include<bits/stdc++.h>
using namespace std;

class node {
    public:
    int val;
    node* next;
    node* prev;
    node(int data ) {
        val = data;
        next = NULL;
        prev = NULL;
    }
};
void insertAtTail(node* &head, int val) {
    node* toAdd = new node(val);
    node* temp = head;
    if(head == NULL) {
        head = toAdd;
        return;
    }
    else{
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = toAdd;
        toAdd->prev = temp;
    }
}
void print(node* head) {
    node* temp = head;
    while(temp != NULL) {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}
void deleteAtHead(node* head) {
    node* toDelete = head;
    head->next = head;
    head->prev = NULL;
    delete toDelete;
}
void deleteNode(node* &head , int pos) {
    if(pos == 1) {
        deleteAtHead(head);
    }
    node* temp = head;
    int counter = 1;
    while(counter != pos && temp != NULL) {
        counter++;
        temp = temp->next;
    }
    node* toDelete = temp;
    if(toDelete->next != NULL) {
        toDelete->next->prev = toDelete->prev;
    }

    toDelete->prev->next = toDelete->next;
}
int main() {
    node* n = NULL;
    insertAtTail(n,2);
    insertAtTail(n,4);
    insertAtTail(n,7);
    insertAtTail(n,8);
    deleteNode(n,3);
    print(n);
}