#include<bits/stdc++.h>
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

int length(node* head) {
    int counter = 0;
    node* temp = head;
    while (temp != NULL) {
        counter++; 
        temp = temp->next;
    }
    return counter;
}
node* appendNodes(node* &head , int k) {
    k = k%length(head);  //this is handle the case if k is greter than length of linked list , suppose l = 5 and k = 7 {k = k ? (k < l) : l-k}
    node* temp = head;
    int counter = 1;
    node* newHead;
    node* newTail;
    while(temp->next != NULL) {
        
        if(counter == length(head) - k) {
             newTail = temp;
        } 
        if(counter == length(head) - k + 1) {
             newHead = temp;
       }
       temp = temp->next;
       counter++; 
    }

    newTail->next = NULL;    
    temp->next = head;
    return newHead;
}
int main() {
    node* head=NULL;
    addToLast(head , 1);
    addToLast(head , 2);
    addToLast(head , 3);
    addToLast(head , 4);
    addToLast(head , 5);
    print(head);
    cout<<endl;
    print(appendNodes(head , 2));
    // print(head);
}