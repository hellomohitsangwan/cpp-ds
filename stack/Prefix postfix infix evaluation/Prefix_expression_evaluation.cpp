#include<bits/stdc++.h>
using namespace std;

/*
1. We start from the last character of the string and traverse the string from right to left.
2. If the current character is a digit, we push it into the stack.
3. If the current character is an operator, we pop two elements from the stack. The first pop is the second operand and the next pop is the first operand.
 We perform the operation on the two operands and push the result back to the stack.
4. When we reach the start of the string, the result will be inside the stack. We return the top of the stack as the result of the expression.
*/
// cpp
 // -+7*45+20 = 25  {7 + (4*5) - (2+0)}
int convert(string s) {
    stack<int> st;
    for (int i = s.length() - 1; i >= 0 ; i--) {
        if(s[i] <= '9' && s[i] >= '0') {
            st.push(s[i] - '0');
        } else {
            int o1 = st.top();
            st.pop();
            int o2 = st.top();
            st.pop();
            cout<<"opeations : "<<endl;
            cout<<o1 << s[i] <<o2<<endl;
            switch(s[i]) {
            case '+' : 
                st.push(o1 + o2);
                break;
            case '-' : 
                st.push(o1 - o2);
                break;
            case '/' : 
                st.push(o1 / o2);
                break;
            case '*' : 
                st.push(o1 * o2);
                break;
            }
        }
    }
    cout<<"result : ";
    return st.top();
}


int main() {
    string s ; cin >>s;
    cout<<convert(s);
}