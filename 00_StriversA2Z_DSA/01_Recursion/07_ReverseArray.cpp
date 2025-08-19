#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 void func(int i,int l,int arr[]){
    if(i>=l) return ;
    swap(arr[i],arr[l]); // swap i and l position
    func(i+1,l-1,arr);
    return ;
 };
int main(){
    int arr[5]={1,2,3,4,5};
    func(0,4,arr);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
  
    return 0;
}