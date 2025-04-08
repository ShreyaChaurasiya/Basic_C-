#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=1;
    for(int i=0;i<n;i++){
        char ch;
        for(int j=0;j<i;j++){
             ch=j+1+'A'-1;
            cout<<ch;
        }
        for(char alp=ch; alp>'A';){
            alp = alp - 1;
            cout<<alp;
        }
        cout<<endl;
    }
}
