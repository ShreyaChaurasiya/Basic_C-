#include<iostream>
using namespace std; 
int main(){
    //for(int i=0;i<5;i++){
    //    for(int j=0;j<5;j++){
    //        if(i==0||i==4){
    //            cout<<"*";
    //        }
    //        else if(j==0||j==4){
    //            cout<<"*";
    //        }
    //        else{
    //            cout<<" ";
    //        }
    //    }
    //    cout<<endl;
    //}
    for(int i=0;i<5;i=i+1){
        for(int j=0;j<i+1;j=j+1){
            cout<<j;
        }
        cout<<endl;
    }
}
