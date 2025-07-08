#include <iostream>
using namespace std;
struct Array
{
    int A[20];     
    int size;   
    int length; 
};
void display(struct Array arr)
{
    int i;
    cout << "elements are" << endl;
    for (i = 0; i < arr.length; i++)
    {
        cout << arr.A[i];
    }
}
void append(struct  Array *arr,int x){
    //use to check wheter the current length of an array desnt exceed the size of an array
    if(arr->length<arr->size){
        arr->A[arr->length++]=x;

    }
}
void insert(struct Array *arr,int index,int x){
    int i;
    if(index>=0 && index <=arr->length){
        for (i=arr->length;i>index;i--){
            arr->A[i]=arr->A[i-1];
            arr->A[index]=x;
            arr->length++;
        }
    }
}
int main(){
    struct Array arr={{4,5,6},2,10};
    append(&arr,10);
    display(arr);
    insert(&arr,5,10);
    return 0;
}
 // -> (Arrow Operator): This is a C++ operator used to access members of a structure or class when you have a pointer to that structure or class