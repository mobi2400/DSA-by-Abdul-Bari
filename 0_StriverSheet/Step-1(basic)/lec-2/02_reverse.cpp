//You are given an integer n. Return the integer formed by placing the digits of n in reverse order.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int rev=0;
    while(n>0){
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    cout<<"the reverse number is "<<rev;
    return 0;
}