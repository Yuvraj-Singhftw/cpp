#include <iostream>
using namespace std;
int main(){
    int n ,ld, product = 1;
    cout<< "Enter a number : "<< endl;
    cin>> n;
    while(n!=0){
        ld = n % 10;
        product = product * ld;
        n = n/10;
    }
    cout<< "Product of digits in the number is : "<< product << endl;
    return 0;
}