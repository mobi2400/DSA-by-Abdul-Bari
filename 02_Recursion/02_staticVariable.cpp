#include <iostream>
using namespace std;
// int x=0 declared globally
int fun(int n){
  static int x=0;
  // x can be declared globally too worked same as this
  // doesnt occupy memory every time func is called(only first time in main code area) 
  //if static is not used then 0 will be assign every time
    if (n>0)
    {
        x++;
        return fun(n-1)+x;
    }
    return 0;
    
}
int main(){
    int a =5;
    printf("%d",fun(5));

    return 0;
}