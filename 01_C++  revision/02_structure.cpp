#include <iostream>
using namespace std;
struct Rectangle{
    int length;
    int breadth;
};// it can be defined here also like r1,r2
//struct Rectangle r1,r2 [defined globally]
int main(){
    struct Rectangle r1={10,5};//can be init like this also. can do seperately also
    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;
    printf("%d",sizeof(r1));


    
    return 0;
}