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
void addToHead(node* &head , int val) {
    node *temp = head;
    node *toAdd = new node(val);

    toAdd->next = head;
    head = toAdd;  //his is neccessary to do bec. we have to change the refrence of head 
    }
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
    } cout<<"NULL";
}
int main() {
    node* head=NULL;
    addToLast(head , 4);
    addToLast(head , 5);
    addToLast(head , 6);
    addToHead(head , 1);
        addToLast(head , 7);
            addToLast(head , 8);
    print(head);
}