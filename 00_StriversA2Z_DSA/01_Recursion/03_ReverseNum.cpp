#include <iostream>
using namespace std;
void fun(int n){
    if(n==0)
        return;
    cout<<n<<endl;
    fun(n-1);

};
// by backtracking  
void fun1(int n){
    if(n==0)
        return;
    fun1(n-1);
    cout<<n<<endl;
};

int main(){
    fun(10);
    return 0;
}