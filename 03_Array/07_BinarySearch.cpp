#include <iostream>
using namespace std;
struct Array {
    int A[20];
    int size;
    int length;
};
int BinarySearch(struct Array arr,int key){
    int l,m,h;
    l=0;
    h=arr.length-1;
    while(h>=l){
        m=(l+h)/2;
        if(key==arr.A[m])
            return m;
        else if (key<arr.A[m])
            h=m-1;
        else
            l=m+1;
    }
    return -1;

}
int RBinSearch(int a[],int l,int h,int key){
    int m;
    if(l<=h){
        m=(l+h)/2;
        if(key==a[m])
            return m;
        else if(key<a[m])
            return RBinSearch(a,l,m-1,key);
        else
            return RBinSearch(a,m+1,h,key);
    }
    return -1;
}

int main(){
    struct Array arr={{2,3,4,5,6},10,5};

    cout<<"binary search"<<BinarySearch(arr,6);
    return 0;
}