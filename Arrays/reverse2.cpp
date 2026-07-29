#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/4; // it ill give the size
    for(int i=0;i<=4; i++){
        cout<<arr[i]<<" ";
    }
    int i = 0;
    int j = n-1;
    while(i<j){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;

    }
    cout<<endl;

    for(int i=0;i<=4; i++){
        cout<<arr[i]<<" ";
    }
   }
