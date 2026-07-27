#include<iostream>
using namespace std;
// we will use two functions because one will create factorial other one will create ncr combination formula 
//result and lastly we will downisde triangle solution 
int fact(int x){
    int f=1;
    for(int i=1; i<=x; i++){
        f=f*i;
    }
    return f;
}
int ncr(int n,int r){
    int a = fact(n);
    int b = fact(r);
    int c = fact(n-r);
    return a/(b*c);
}

int main(){ 
    int r,n;
    cout<<"enter number of lines"<<endl;
    cin>>r;
           
    for(int i=0; i<=r; i++){
        for(int j=0; j<=i; j++){
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
}
    

 
