#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void fun(int i, int n){
    if(i>n)
        return;
    printf("mobi\n");
    fun(i+1,n);
};
// by backtracking
void fun1(int i, int n){
    if(i>n)
        return;
    fun1(i+1,n); // first it will be called multiple and once terminated then it will print
    printf("mobi\n"); 
}
int main(){
    fun(1,10);
    return 0;
}
