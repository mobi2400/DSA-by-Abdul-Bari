#include <iostream>
using namespace std;
struct Array {
    int A[5];
    int size;
    int length;
};
// by using auxilary array
void Reverse(struct Array *arr){
    int *B;
    int i,j;
    for(i=arr->length-1,j=0;i>=0;i--,j++){
        B[j]=arr->A[i];
    }
    for(i=0;i<arr->length;i++){
        arr->A[i]=B[i];
    }
}
// by swapping
void Reverse2(struct Array *arr){
    int i,j;
    for(i=0,j=arr->length-1;i<j;i++,j--){
        int temp=arr->A[i];
        arr->A[i]=arr->A[j];
        arr->A[j]=temp;
    }
}
void display(struct Array arr)
{
    int i;
    cout << "elements are" << endl;
    for (i = 0; i < arr.length; i++)
    {
        cout << arr.A[i];
    }
    }
    

int main(){
    struct Array arr = {{2,3,4, 5, 6}, 10, 15};
    Reverse2(&arr);
    display(arr);
    
    return 0;
}