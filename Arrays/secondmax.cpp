#include<iostream>
using namespace std;

int main(){
    int arr[5];
    int mx=INT_MIN; 
    cout<<"enter elements";
    for(int i=0; i<=4; i++){
    cin>>arr[i];
    }
    
    for(int i=0; i<=5; i++){
        mx = max(mx,arr[i]);

    }
    int smx = INT_MIN;
    for(int i=0; i<=4; i++){
        if(arr[i]!=mx)
        smx = max(smx,arr[i]);
    }
 
    
    cout<<smx<<endl;
    return 0;

}