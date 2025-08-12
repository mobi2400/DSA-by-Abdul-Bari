#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    // LIFO
    stack<int> st; // creates a stack
    st.push(1); // adds an element
    st.push(2);
    st.push(3);
    cout<<st.top();// returns the top element
    st.pop(); // removes the top element
    cout<<st.top(); // returns the top element
    cout<<st.size(); // returns the size
    cout<<st.empty(); // returns true if stack is empty


    return 0;
}