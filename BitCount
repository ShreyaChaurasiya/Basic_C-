include<iostream>
using namespace std;
 int hamingweight(int n){
    int count = 0;
    while(n!=0){
        count +=n&1;
        n=n>>1;
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    int result=hamingweight(n);
    cout<<"Hamming Weight :"<<result<<endl;
}
