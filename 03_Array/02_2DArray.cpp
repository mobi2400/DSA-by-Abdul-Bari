#include <iostream>
using namespace std;

int main(){
    // array created in stack
    int A[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    // array in stack and heap 
    int *B[3]; // in stack
    B[0]=new int[4]; // in heap
    B[1]=new int[4]; // in heap
    B[2]=new int[4]; // in heap
    // array in heap full (double pointer)
    int **C;
    C = new int *[3];
    C[0]=new int[4];
    C[1]=new int[4];
    C[2]=new int[4];

    return 0;
}