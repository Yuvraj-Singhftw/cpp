#include<iostream>
using namespace std;

int main(){
    int arr[5];
    int sum=0;
    cout<<"enter elements";
    for(int i=0; i<=4; i++){
    cin>>arr[i];
    }
    
    for(int i=0; i<=4; i++){
    cout<<arr[i]<<" ";
    sum=sum+i;
 }
    
    cout<<"the sum of arrays is"<<" "<<sum<<endl;
    return 0;

}