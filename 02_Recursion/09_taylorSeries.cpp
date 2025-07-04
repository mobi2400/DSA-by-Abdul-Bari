#include <iostream>
using namespace std;
//time = O(n2)
int e(int x, int n){
    static int p=1,f=1;
    int r;
    if(n==0)
        return (1);
    else
        r = e(x,n-1);
        p=p*x;
        f=f*n;
        return r +(p/f);
};

int main(){
    int taylorSeries=e(2,10);
    cout<<taylorSeries;
    return 0;
}