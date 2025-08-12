#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v; // dynamic array
    v.push_back(1);
    v.emplace_back(2); // dynamically inc size and add 2 at the end
    vector<int>::iterator it=v.begin(); // iterator points to the first element(address) of the vector
    cout<<*it<<endl; // * it access the data present in add
    it++;
    cout<<*it<<endl;
    vector<int>::iterator it = v.end(); // access the  just after the last element
    // not used
    vector<int>::iterator it = v.rend(); // reverse iterator and start from end 
    vector<int>::iterator it = v.rbegin(); // reverse iterator and start from begin
    for(vector<int>::iterator it=v.begin();it!=v.end();it++){ // for each loop
        cout<<*it<<endl;    
    }
  // wide range for loop 
  // easy and widely used
    for (auto it = v.begin(); it != v.end(); it++)
    // auto directly assigns the data type
    {
        cout << *it << endl;
    }
    // iterate the whole array
    for (auto x : v)
    {
        cout << x << endl;
    }
    // to delete 
    v.erase(it);
    v.erase(it,v.end());// erase from it to end

    //to swap vector 
    v.swap(v2);

    // to clear the vector
    v.clear();

    // to know size
    v.size();
    
    return 0;
}