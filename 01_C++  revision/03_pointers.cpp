/*pointers are used to access heap memory
                            external resources
and used in passing the parameters
WHATEVER THE DATA TYPE OF POINTER IS(INT,FLOAT,CHAR,DOUBLE) ALL OCCUPY SAME SPACE(8 BYTES)
*/ 
#include <iostream>
using namespace std;
int main(){
    int a=10;
    int *p; //declaration  of pointers
    p=&a;  //assigning the value
    //printf("using pointers %d",*p); 
    // if * is removed then it will print address[either p or &a both print addreess]
    

    int A[5]={1,2,3,4,5};
    int *q;
    q=A; // & is not used in case of array

    for(int i=0;i<5;i++){
        //cout<<A[i]<<endl; //p[i] can be also used to acces data
    }


    // assign pointer in heap memory
    int *w;
    w = new int[5]; // pointer array is assign in heap memory[dynamically]
    w[0]=1;
    w[1]=2;
    w[2]=3;
    w[3]=4;
    w[4]=5;
    for (int i = 0; i < 5; i++)
    {
        cout<<w[i]<<endl;
    }
    
    delete[] w; 
    // [] is used in case of array in normal just write the variable name
    //afetr using the memory in heap it must be deleted to free the space. if not done then there would be memory leak 

    return 0;
}