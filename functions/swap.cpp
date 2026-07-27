#include<iostream>
using namespace std;
int main() {
    int x,y,temp;
    cout<<"enter x";
    cin>>x;
    cout<<"enter y";
    cin>>y;

    x=temp;
    y=x;
    y=temp;
    cout<<x<<"number x swaped";
    cout<<y<<"number y swaped";

    return 0;
}
//2nd method x=x+y , y=x-y , x=x-y