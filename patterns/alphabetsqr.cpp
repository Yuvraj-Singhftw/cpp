#include<iostream>
using namespace std;
int main(){
    int r  ;
    cout<< "Enter the number of rows : "<< endl;
    cin>> r;
    
    for(int i = 1; i<=r; i++){
        for(int j = 1; j<=r; j++){ //
            cout<< char(j + 95) << " "; // 64 for A and 96 for a
        }
        cout<< endl;
    }
    return 0;
}   