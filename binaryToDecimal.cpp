#include<iostream>
#include<cmath>
using namespace std;

int decimalToBinary(int n){
    int binary=0;
    int i=0;
    while(n>0){
        int bit=n%2;
       // cout<<bit<<endl;
        binary=bit*pow(10,i++)+binary;
        n=n/2;
    }
    return binary;
}
int main(){
    int n;
    cin>>n;
    int binary= decimalToBinary(n);
    cout<<binary<<endl;
}
