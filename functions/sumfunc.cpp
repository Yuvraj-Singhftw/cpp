#include<iostream>
using namespace std;
void sum(int a, int b){
    int c = a+b;
    cout<<"Sum: "<<c<<endl;
}
int main(){
    int a,b;
    cout<<"Enter two numbers: " <<endl;
    cin>>a>>b;
    sum(a,b);
    return 0;
}