#include <iostream>
using namespace std;
void fun(int n){
     static int i=1;
     if(i<=n){
        cout<<i<<" ";
        i++;
        fun(n);
     }
     return;
}
// by backtarcking
void fun1(int n){
    static int i=1;
    if(i<=n){
        fun1(n);}
         cout<<i<<" ";
        i++;
        return ;
    }
       

int main(){
    fun(10);
    return 0;
}