#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<2*i+1;j++){
            if(j%2!=0){
                cout<<"*";
            }
            else{
                cout<<i;
            }
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(j%2!=0){
                cout<<"*";
            }
            else{
                cout<<i;
            }
        }
        cout<<endl;
    }
}
