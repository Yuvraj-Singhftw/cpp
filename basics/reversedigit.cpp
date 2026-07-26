#include <iostream>
using namespace std;
int main(){
    int n ,ld, r = 0;
    cout<< "Enter a number : "<< endl;
    cin>> n;
    while(n!=0){
        ld = n % 10;
        r = r * 10 + ld ;
        n = n/10;
    }
    cout<< "Reversed number is : "<< r << endl;
    return 0;
    
}