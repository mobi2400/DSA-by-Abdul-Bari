#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    //lifo
    queue<int> q; // creates a queue
    q.push(1); // adds an element
    q.push(2);
    q.push(3);
    cout<<q.front(); // returns the front element
    q.pop(); // removes the front element
    cout<<q.front(); // returns the front element
    cout<<q.size(); // returns the size
    cout<<q.empty(); // returns true if queue is empty

    return 0;
}