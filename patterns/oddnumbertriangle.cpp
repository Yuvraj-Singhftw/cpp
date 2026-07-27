#include<iostream>
using namespace std;
int main(){
    int r ;
    cout<< "Enter the number of lines : "<< endl;
    cin>> r;
    for(int i = 1; i<=r; i++){
        for(int j = 1; j<=i; j++){ //
            cout<< 2*j-1 << " "; // 2*i-1 1 33 555 patterns
        }
        cout<< endl;
    }
    return 0;
}