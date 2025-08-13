#include <iostream>
using namespace std;
struct Array {
    int A[5];
    int size;
    int length;
};
int GET(struct Array arr,int index){
    if(index>=0 && index<arr.length){
        return arr.A[index];
    }
    return -1;
}
void SET(struct Array *arr,int index,int x){
    if(index>=0 && index<arr->length){
        arr->A[index]=x;
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
int MAX(struct Array arr){
    int max=arr.A[0];
    int i;
    for(i=1;i<arr.length;i++){
        if(arr.A[i]>max){
            max=arr.A[i];
        }
    }
    return max;
}
int Min(struct Array arr){
    int min=arr.A[0];
    int i;
    for(i=1;i<arr.length;i++){
        if(arr.A[i]<min){
            min=arr.A[i];
        }
    }
    return min;
}
int Sum(struct Array arr){
    int sum=0;
    int i;
    for(i=0;i<arr.length;i++){
        sum+=arr.A[i];
    }
    return sum;
}
float Avg(struct Array arr){
    return (float)Sum(arr)/arr.length;
}
int main(){
    struct Array arr = {{2,3,4, 5, 6}, 10, 15};

    cout << GET(arr, 2) << endl;
    SET(&arr, 2, 100);
    display(arr);
    cout<<MAX(arr)<<endl;
    cout<<Min(arr)<<endl;
    cout<<Sum(arr)<<endl;
    cout<<Avg(arr)<<endl;


    return 0;
}