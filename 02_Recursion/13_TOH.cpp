#include <iostream>
using namespace std;
// tower of hanoi 2pow(n)-1 to get executed{n is number of disk}
//O(2pow(n))
void TOH(int n,int A,int B,int C){
    if(n>0){
        TOH(n-1,A,C,B);
        printf("from %d to %d\n",A,C);
        TOH(n-1,B,A,C);
    }

};
int main(){
  TOH(3,1,2,3);

    return 0;
}