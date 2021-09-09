#include<bits/stdc++.h>
using namespace std;


 // 46+2/5*7+ = 32
/*
1. We start with a stack of integers.
2. We iterate over the string.
3. If the character is a digit, we push it onto the stack.
4. If the character is an operator, we pop the top two elements from the stack, apply the operator on them and push the result back.
5. At the end of the iteration, the stack will have the final result, which we return.
*/
int convert(string s) {
    stack<int> st;
    for (int i = 0; i < s.length() ; i++) {
        if(s[i] <= '9' && s[i] >= '0') {
            st.push(s[i] - '0');
        } else {
            int o2 = st.top();
            st.pop();
            int o1 = st.top();
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