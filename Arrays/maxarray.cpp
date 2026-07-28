#include<iostream>
using namespace std;

int main(){
    int arr[5];
    int mx=arr[0];
    cout<<"enter elements";
    for(int i=0; i<=4; i++){
    cin>>arr[i];
    }
    
    for(int i=0; i<=5; i++){
        if(arr[i]>mx) mx = arr[i];

    }
    
 
    
    cout<<mx<<endl;
    return 0;

}