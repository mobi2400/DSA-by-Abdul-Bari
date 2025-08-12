#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    // fast  than vector
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    l.emplace_back(3);
    l.emplace_front(4);

    for(auto i:l)
        cout<<i<<" ";
    
    return 0;
}