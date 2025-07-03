#include <iostream>
using namespace std;
//this one is more dynamic can be used to find sum between any number
int fun(int n,int m){
    int static j;
    if(n>m){
        return j;  
    }
    else{
       j += n;
        fun(n+1,m);
    }
};
/* this could be used to only find N natural number 
Another method
int sum(int n){
    if n==0;
        return 0;
    return sum(n-1)+n;
}
*/


// loop can be also used but that will be termed as itterative not recursive

int main(){
    int A=fun(1,10);
    cout<<A;
    return 0;
}