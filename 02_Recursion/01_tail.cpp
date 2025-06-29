#include <iostream>
using namespace std;
void fun(int n){
    if (n>0)
    {
        //fun(n-1) descending(returning)
        cout<<n<<endl; //printf("%d",n) can write this also  
        fun(n-1);//Ascending(calling)
    }   
}
int main(){
  int x= 3;
  fun(x);

    return 0;
}