#include<iostream>
using namespace std;
int main(){
    int a=5;
    int b=10;
    int c=a&b;
    cout<<c<<endl;
    cout<<(a|b)<<endl;
    cout<<(~a)<<endl;
    bool a1=6;
    cout<<~a1<<endl;
    cout<<(a^b)<<endl;
    cout<<(a^a)<<endl;
    cout<<(a^~a)<<endl;
     cout<<(a<<3)<<endl;
      cout<<(b<<1)<<endl;
       cout<<(a>>1)<<endl;
        cout<<(b>>1)<<endl;
}
