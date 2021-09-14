#include<bits/stdc++.h>
using namespace std;

void convert(string s) {
    stack<char> st;
    stack<char> ans;
    for(int = s.length() -1 ; i >=0  i--) {
        if(s[i] == ')') {
            st.push(s[i]);
        }
        else if((s[i] >= 'a' &&s[i] <='z')  || (s[i] >= 'A' && s[i] <= 'Z')) {
            ans.push(s[i]);
        }
        else if(s[i] == '('){
            while(!st.empty() && s[i] != ')') {
                ans.push(st.top())
                st.pop();
            }
            if(!st.empty()) {  //to remove the last opening bracket
                st.pop();
            }
        }
        else { //means an operator
            while(!st.empty() && prec(s[i]) <= prec(st.top())) {
                ans.push(st.top());
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()) {  //there might be some operand remaining in the stack that we pushed before an closing paranthesis so to add that e are doing this 
    // stack will look like this in thus case  : 
    // -
    // ) //this is removies id outer loops but that star is remaining in the stack so pushing that
    // * 
        ans.push(st.top());
        st.pop();
    }
    while(!ans.empty()) {
        cout<<ans.top()<<endl;
    }
}
int main() {
    convert("(a-b/c) * (a/k)-l");   
}