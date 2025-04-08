#include<iostream>
using namespace std;
int binarysearch(int array[],int x,int low,int high){
    while (low<=high){
        int mid=low+(high-low)/2;
        if(array[mid]==x)
        return mid;
        if(array[mid]<x)
        low=mid+1;
        else
          high=mid-1;
    }
    return-1;
}
int main(void){
    int array[]={2,3,4,5,6,7,8,9};
    int x=5;
    int n=sizeof(array)/sizeof(array[0]);
    int result=binarysearch(array,x,0,n);
    if(result==-1)
    cout<<"Element is not found in array"<<endl;
    else
    cout<<"Element is present in array: "<<result;
    return 0;

}
