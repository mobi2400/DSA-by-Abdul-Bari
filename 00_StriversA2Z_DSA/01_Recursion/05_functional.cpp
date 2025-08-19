#include <iostream>
using namespace std;
int fun(int n){
    if (n==0)
        return 0;
    return n+fun(n-1);
}

int main(){
    cout<<fun(10);
    return 0;
}