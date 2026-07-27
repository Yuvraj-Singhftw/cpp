#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int r;
    cout<<"enter the number"<<endl;
    cin>>r;
    int a = 1;

    for(int i=1; i<=n; i++){
     a=a*i;
    }
    cout<<a<<endl;
    int b = 1;

    for(int i=1; i<=r; i++){
     b=b*i;
    }
    cout<<b<<endl;

    int c = 1;
    for(int i=1; i<=n-r; i++){
     c=c*i;
    }
    cout<<c<<endl;
    cout<<a/(b*c)<<"NcR";
    return 0;
}