#include <iostream>
using namespace std;
int main(){
    int a, b, c;

    cout<< "enter number 1st : "<< endl;
    cin>> a;
    cout<< "enter number 2nd : "<< endl;
    cin>> b;
    cout<< "enter number 3rd : "<< endl;
    cin>> c;

    if(a>b && a>c){
        cout<< "Greatest number is : "<< a;
    }
    else if(b>a && b>c){
        cout<< "Greatest number is : "<< b;
    }
    else{
        cout<< "Greatest number is : "<< c;
    }

    return 0;
}