#include <iostream>
using namespace std;
int main(){
    int n ,ld, sum = 0;
    cout<< "Enter a number : "<< endl;
    cin>> n;
    while(n!=0){
        ld = n % 10;
        if(ld%2==0){
            sum = sum + ld;
        } //why n = n/10 come at last why 
        n = n/10;
    }
    cout<< "Sum of digits in the number is : "<< sum << endl;
    return 0;
}