#include <iostream>
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


//approch -1 : iterator method
node* reversell (node* &head) {
    node* prevPtr = NULL;
    node* currPtr = head;
    node* nextPtr;

    while (currPtr != NULL) {
        nextPtr = currPtr->next; //we need to store the curr.next in nextPtr here bec. after that we are changing the curr.next ptr to previous ptr ao not able to do it after (just like savung a digin in temp before swaping)
        currPtr->next = prevPtr;

        prevPtr = currPtr;
        currPtr = nextPtr;
    }
    return prevPtr;
    
}

//approch - 2: reecusive method 
node* reversell__recursive (node* &head) {

    //base case:
    if(head->next == NULL || head == NULL) {
        return head;
    }

    node* newHead = reversell__recursive(head->next);  //it gives back the remaining ll in reversed form
    head->next->next = head;  //pointing the tail of revrsed ll(new head) to the orignal head 
    head->next = NULL;  //pointing the orignal head to null in order or revrse it

    return newHead;
}

int main() {
    node* head=NULL;
    addToLast(head , 4);
    addToLast(head , 5);
    addToLast(head , 6);
    node* rll = reversell(head);
    print(rll);
}