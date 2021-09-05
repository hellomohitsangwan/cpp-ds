#include<iostream>
using namespace std;

#define n 100
class stack {
    public:
    int top;
    int* arr;
    public:
    stack() {
        arr = new int[n];
        top = -1;
    }
    void push(int element) {
        if(top == n - 1) {
            cout<<"size full";
            return;
        }
        top++;
        arr[top] = element;
    }
    void pop() {
        if(top == -1) {
            cout<<"stack is already empty";
            return;
        }
        top--;
    }
    int Top() {
        if(top == -1) {
            cout<<"stack is empty";
            return -1;
        }
        return arr[top];
    }
    bool isEmpty() {
        return top == -1;
    }

};

int main() {
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top();
}