#include <iostream>
using namespace std;
int power(int n,int m){
    if (m==0)
    {
        return 1;
    }
    return power(n,m-1)*n; // its like 2**3 = (2**2)*2
    
};
/* short method for less space and time 
int power(int m, int n){
    if(n==0)
        return 1
    if(n%2==0)
        return power(m*m,n/2)
    else
        return m*power(m*m,(n-1)/2);
}
*/


int main(){
   int pow= power(2,10);
   cout<<pow;
    return 0;
}