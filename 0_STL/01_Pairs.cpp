#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    pair<int,int> p={1,3}; //declaration of pair
    cout<<p.first<<" "<<p.second<<endl;
    // nested pair
    pair<int,pair<int,int>> p1={1,{2,3}};
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;

    // array of pairs
    pair<int,int> arr[3]={{1,2},{3,4},{5,6}};
    cout<<arr[0].first<<" "<<arr[0].second<<endl;
    
    return 0;
}