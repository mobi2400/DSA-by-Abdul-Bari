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
int delte(struct Array *arr,int index){
    int x;
    int i;
    if(index>0&&index<arr->length){
        x=arr->A[index];
        for(i=index;i<arr->length-1;i++){
            arr->A[i]=arr->A[i+1];
            arr->length--;
            return x;
        }
    }
    
    
    return 0;
}
int main(){
    struct Array arr={{4,5,6},2,10};
    append(&arr,10);
    display(arr);
    insert(&arr,5,10);
    delte(&arr,3);
    
    return 0;
}