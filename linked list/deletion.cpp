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
    } cout<<"NULL";
}

// id the ll has only head so we this fn. delete the head
void deleteHead(node* head) {
    node* toDelete = head;
    head = head->next;
    delete toDelete;
}
// fn. to delete any node of ll which have given value in the ll
void deleteAnyVal(node* &head , int val) {
    node* temp = head; //pointer to head;

    //corner case: if the head is null then
    if(head == NULL) {
        return;
    }
    while (temp->next->data != val)  //this will stop 1 node before the required node to be deleted
    {
        temp = temp->next;
        if(temp->next == NULL) { 
            cout<<val<<"is not present in the linked list"<<endl; //check that if the value is not present in the ll then return and don't delete any node
            return;
        }
    }
    node* toDelete = temp->next;  //we have to delete this node 
    temp->next = temp->next->next;
    delete toDelete;  //this is necessary to delete to prevent from memory leaks
    
}

int main() {
    node* head=NULL;
    addToLast(head , 4);
    addToLast(head , 5);
    addToLast(head , 6);
    deleteAnyVal(head , 7);
    deleteAnyVal(head , 5);
    print(head);
}