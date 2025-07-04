#include <iostream>
using namespace std;
//this is excessive recursion-when func call thmeselve multiple time for same value
int fibo(int n){
    if(n<=1)
        return n;
    return fibo(n-2)+fibo(n-1);
// Time-O(2pow(n)) and take more space
// if func call them twice by reduced value then time is O(2pow(n))

};
/* if we use loop
 int t0 =0,t1=1,s;
 if(n<=1)
    return n`
for(int i =2,i<n,i++)
    s=t0+t1;
    t0=t1;
    t1=s;
Time-O(n)
*/
int main(){
    cout<<fibo(7);
    return 0;
};
// to avoid excessive recurssion create a static Array and init some value and save the value of func in it which is called multiple time and use it when needed instead of calling by this u can time complexity will reduced like in above example it will be O(n) by O(2pow(n)) and this process or method is called MEMOIZATION(storing the result which can be further used)

int fib(int n){

    static int F[10]; // initially every value inside an array is -1(assume)
    if(n<=1){
        F[n]=n;
        return n;
    }
    else{
        if(F[n-2]==-1){
            F[n-2]=fib(n-2);
        }
        if(F[n-1]==-1){
            F[n-1]=fib(n-1);
        
        }
    return F[n-2]+F[n-1];
    }
}