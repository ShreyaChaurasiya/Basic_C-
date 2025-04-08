#include<iostream>
using namespace std;
 
void countZeroOnes(int arr[],int size){
    int countZero = 0;
    int countOnes = 0;
     for(int i=0; i<size; i++){
        if(arr[i]== 0){
            countZero++;
        }
        else if(arr[i]==1){
            countOnes++;
        }
     }
     cout<<"countZero:"<<" "<<countZero<<endl;
     cout<<"countOnes:"<<" "<<countOnes<<endl;
}
int main () {
    int arr[]={0,0,1,1,0,0,1,0,1,0,1,0,1,0,0,1,1,1,0,0,1,0,1,0,1,1,1,0};
    int size=27;
    countZeroOnes(arr,size);
    return 0;
}
