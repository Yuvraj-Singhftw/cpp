#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter a number : "<< endl;
    cin>> n;

    // first method 

    for(int i = 1; i<=n; i++){
        if (i!=3 && i!=8){
            cout<<i<< " ";
       }
    }

    // second method
    for(int i = 1; i<=n; i++){
        if (i==3 || i==8){
            continue;
        }
        cout<<i<< " ";
        }
    

    return 0;
