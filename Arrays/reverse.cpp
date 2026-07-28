#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/4; // it ill give the size
    int brr[n];
   for(int i=0; i<=4; i++){
    int j = n-1-i;
    brr[i]=arr[j];
   }
   for(int i=0; i<=4; i++){
     cout<<brr[i]<<" ";

    
    return 0;
   }
}