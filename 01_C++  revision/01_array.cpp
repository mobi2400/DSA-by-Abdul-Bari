#include <iostream>
using namespace std;
int main()
{
    int A[5]; //static memory
    A[0] = 15;
    A[1] = 20;
    A[2] = 45;
    //cout << sizeof(A) << endl;
    //cout << A[1] << endl;
    //printf("%d\n", A[2]);

    int B[10]={2,4,6,8,10,12};
    // for each loop
    for(int x:B){
        //cout<<x<<endl;
    }

    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int C[n];//={1,2,3} cannot assign and init value like this
    C[0]=1;
    C[1]=2;
    //rest of the storage stores garbage value


    return 0;
}