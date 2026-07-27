#include<iostream>
using namespace std;
int main(){
    int r ;
    cout<< "Enter the number of lines : "<< endl;
    cin>> r;
    int mid = r/2+1;
    for(int i = 1; i<=r; i++){
        for(int j = 1; j<=r; j++){ //
            if(i==mid || j==mid){
            cout<< "* "; // 64 for A and 96 for a
            }
            else{
                cout<< "  ";
                
            }
            
        }
        cout<< endl;
    }
    return 0;

}   