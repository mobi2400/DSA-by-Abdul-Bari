#include <iostream>
using namespace std;
// time= O[n]
double e(int x,int n){
    static double s=1;
    if(n==0)
        return s;
    
    s=1+x*s/n;   
    return e(x,n-1);
};
int main(){
    cout<<e(1,10)<<endl;

    printf("%lf ",e(2,10));
    return 0;
}