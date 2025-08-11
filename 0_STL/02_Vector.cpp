#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v; // dynamic array
    v.push_back(1);
    v.emplace_back(2); // dynamically inc size and add 2 at the end
                        // faster than push_back
    // vector pairs
    vector<pair<int,int>> vp;
    vp.push_back({1,2}); // {} imp to declare pair
    vp.emplace_back(2,3); // automatically assume it to be pair 
    
    return 0;
}