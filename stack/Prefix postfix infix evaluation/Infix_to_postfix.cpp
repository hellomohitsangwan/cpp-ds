#include<bits/stdc++.h>
using namespace std;

/*
1. We first check if the character is an opening bracket or not. If it is, we push it to the stack.
2. If it is a closing bracket, we pop the stack until we find an opening bracket.
3. If it is an operator, we check the precedence of the operator with the top of the stack. If the precedence of the top of the stack is greater,
 we pop the stack and add it to the answer.
4. If the precedence of the top of the stack is less, we push the current operator to the stack.
5. If the character is a digit, we add it to the answer.
6. Finally, we pop the stack and add all the elements to the answer.
*/
int prec(char a) {
    if(a == '^') {
        return 3;
    }
    else if(a == '*' || a== '/') {
        return 2;
    }
    else if(a == '+' || a == '-') {
        return 1;
    } else {
        return -1;
    }
}
void convert(string s) {
    stack<char> st;
    string ans =  "";
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '(') {
            st.push(s[i]);
        }
        else if((s[i] >= 'a' &&s[i] <='z')  || (s[i] >= 'A' && s[i] <= 'Z')) {
            ans.push_back(s[i]);
        }
        else if(s[i] == ')') {
            while(!st.empty() && st.top() != '(') { 
                ans.push_back(st.top()); 
                st.pop();
            }
            if(!st.empty()) {   //to remove that last opening brackett ('(')
                    st.pop();
                }
        } 
        else {
        while(!st.empty() && prec(st.top()) >= prec(s[i])) {
            ans += st.top();
            st.pop();
        }
        st.push(s[i]);  //finally after removing and adding the precicion operator into the string we return add the current operator into the stack
        }
    }
    while(!st.empty()) {
        ans.push_back(st.top());
        st.pop();
    }
    cout<<ans; 
}

int main() {
    convert("(a-b/c)*(a/k-l)");
} 