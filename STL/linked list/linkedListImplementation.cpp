#include<iostream>
using namespace std;
class node {
    public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
    }
};
void addToLast(node* &head , int data) {
    node* toAdd = new node(data);
    if(head == NULL) {
        head = toAdd;
        return;
    }

    node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = toAdd;
}
void print(node* head) {
    node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}
int main() {
    node* head;
    head.addto
}