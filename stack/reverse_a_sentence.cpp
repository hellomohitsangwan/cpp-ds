#include<bits/stdc++.h>
using namespace std;

int main() {
    // string s; cin>>s;
    string s = "hello bro! how's you doing";
    stack<string> st;
    for (int i = 0; i <s.length() ; i++) {
        string word = "";
        while(s[i] != ' ' && i < s.length()) {
            word += s[i];
            i++;
        }
        st.push(word);
    }
    while(!st.empty()) {
        cout<<st.top()<<" ";
        st.pop();
    }
}