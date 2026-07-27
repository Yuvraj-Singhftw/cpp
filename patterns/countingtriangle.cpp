
#include<iostream>
using namespace std;
int main(){
    int r ;
    cout<< "Enter the number of lines : "<< endl;
    cin>> r;
    int a=1;
    for(int i = 1; i<=r; i++){
        for(int j = 1; j<=i; j++){ //
            cout<< a << " "; // 64 for A and 96 for a
            a++;
        }
        cout<< endl;
    }
    return 0;

}   