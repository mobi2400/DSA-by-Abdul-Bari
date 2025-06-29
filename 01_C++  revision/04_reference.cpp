//reference is nothing but giving a another new name to the variable. both are valid and can be used to call variable.
// generally used in parameter passing
//reference doesnt consumed any memory
#include <iostream>
using namespace std;
int main(){
    int a=10;
    int &r=a; //& is used for reference
    cout<<a<<endl<<r<<endl;

    return 0;
}