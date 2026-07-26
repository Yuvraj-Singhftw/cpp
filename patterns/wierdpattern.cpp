#include<iostream>
using namespace std;
int main(){
    int r ;
    cout<< "Enter the number of lines : "<< endl;
    cin>> r;
    for(int i = 1; i<=r; i++){
        for(int j = 1; j<=i; j++){ //
            if(i%2==0){
            cout<<  " " << char(j+64) << " "; // 64 for A and 96 for a
        
            }
            else{
                cout<< j << " ";
                
            }
    
    } cout << endl;
} 
    return 0;
}
   