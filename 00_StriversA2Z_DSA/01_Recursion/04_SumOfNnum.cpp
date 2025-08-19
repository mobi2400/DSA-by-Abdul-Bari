#include <iostream>
using namespace std;
int fun(int n){
    static int sum=0;
    if (n<0)
        return 0;
    fun(n-1);
     sum+=n;
    return sum;
};

int main(){
     int ans =fun(10);
     cout<<ans;
    return 0;
}