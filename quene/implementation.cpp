#include<bits/stdc++.h>
using namespace std;

#define n 1000

class quene {
    public:
    int *arr;
    int front;
    int back;
    quene() {
        arr = new int[n];
        front = -1;
        back = - 1;
    }
    void push(int element) {

        if(back == 1000) {
            cout<<"quene is full";
            return;
        } 
        back++;
        if(front == -1) {
            front++;
        }
        arr[back] = element;
    } 
    void pop() {
        if(front == -1 || front > back) {
            cout<<"quene is empty";
            return;
        }
        front++;
    }
    int peek() {
        if(front == -1 || front > back) {
            cout<<"quene is empty";
            return 0;
        }
        return arr[front];
    }
    bool empty() {
        if(front == -1 || front > back) {
            return true;
        } return false;
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