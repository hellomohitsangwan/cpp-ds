#include<iostream>
using namespace std;

class node {
    public:
    node* next;
    int data;
    node(int val) {
        next == NULL;
        data = val;
    }
};

class quene {
    public:
    node* front;
    node* back;
    quene() {
        front = NULL;
        back = NULL;
    }
    void push(int element) {
        node * toAdd = new node(element);

        if(front == NULL) {
            front = toAdd;
            back = toAdd;
        }
        back->next = toAdd;
        back = toAdd;
    }
    int peek() {
        if(front == NULL) {
            cout<<"empty quene";
            return -1;
        }
        return front->data;
    }
    void pop() {
        if(front == NULL) {
            cout<<"empty quene";
            return;
        }
        node* toDelete = front;
        front = front->next;
        delete toDelete;
    }
    bool isEmpty() {
        return front == NULL;
    }
};
int main() {
    quene q;
    q.push(1);
    q.push(2);
    q.push(4);
    q.push(5);
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek();
}