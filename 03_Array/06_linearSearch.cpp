#include <iostream>
using namespace std;
struct Array {
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
void swap(int *x,int *y){
    int temp;
    temp = *x;
    *x=*y;
    *y=temp; 

}
int linearSearch(struct Array *arr,int key){
    int i;
    for ( i = 0; i < arr->length; i++)
    {
      if(key==arr->A[i]){
        swap(&arr->A[i],&arr->A[i-1]);
        return i;
      }
    }
    return -1;
    
}
int main(){
    struct Array arr={{4,5,6},2,10};
    cout<<"the index of 6 is"<<linearSearch(&arr,6);
    display(arr);
 
    return 0;
}