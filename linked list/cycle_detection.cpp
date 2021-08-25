#include<bits/stdc++.h>
using namespace std;
class node {
    public:
    int val;
    node *next;
    node(int data) {
        val = data;
        next = NULL;
    }
};
void addToLast(node* &head , int data) {
    node *toAdd = new node(data);
    node *temp = head;  // pointer pointing to head
    if(head == NULL) {
        head = toAdd;
    }
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = toAdd;

}
void print(node *head) {
    node *temp = head; 
    while(temp != NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    } cout<<"NULL";
}
void makeCycle(node *head , int posToMakeCycle) {
    node *temp = head;
    node *toMakeCycle;
    int counter = 1;
    while(temp != NULL) {
        
        if(counter == posToMakeCycle) {
            toMakeCycle = temp;
        }
        counter++;
        temp = temp->next;
    }
    temp->next = toMakeCycle;
}
bool isCyclePresent(node *head) {
    node * slow = head;
    node * fast = head;
    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) {
            return true;
        } 
    } return false;
}
int main() {
   
}