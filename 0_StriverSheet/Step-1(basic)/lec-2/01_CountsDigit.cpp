//You are given an integer n. You need to return the number of digits in the number.The number will have no leading zeroes, except when the number is 0 itself.
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int count=0;
    while(n>0){
        n=n/10;
        count+=1;
    }
    cout<<"the number of digits is "<<count;
    return 0;
}