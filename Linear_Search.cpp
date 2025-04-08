#include<iostream>
using namespace std;
int Search(int array[],int x,int n){
  for(int i=0;i<n;i++){
    if(array[i]==n){
      return i;
    }
  }
  return -1;
}
int main() {
  int array[]={23,45,25,36,47,58,69,38,49,57,69,83,92,84};
  int n=02;
  int x=sizeof(array)/sizeof(array[0]);
  //function calling
  int result=Search(array,x,n);
  (result==-1)?
  cout<<"Element is not present in array":
  cout<<"Element is present in array"<<endl;
  return 0;
}
