#include <iostream>
using namespace std;
int func(int n){
    if (n>100)
    {
        return n-10;
    }
    else{
        func(func(n+11));// call the func until n is greater than 100
    }
    
};

int main(){
    int A = func(95);
    cout<<A<<endl;
    return 0;
}