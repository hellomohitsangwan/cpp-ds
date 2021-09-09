#include<bits/stdc++.h>
using namespace std;

int convert(string s) {
    stack<int> st;
    for (int i = s.length() - 1; i >= 0 ; i--) {
        if(s[i] <= '9' && s[i] >= '0') {
            st.push(s[i] - '0');
        }
        else {
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