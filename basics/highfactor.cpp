#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter a number : "<< endl;
    cin>> n;
 // if you want to get only highest factor of a number then you can use this method
    int f = 1;
    for(int i = 1; i<n; i++){ // i<=n if you want to include the number itself
        if(n%i==0) f = i;
    }
            cout<< f << " ";
        
    //how is this working? we are checking all the numbers from 1 to n-1 and if it is a factor then we are storing it in f and at the end we will get the 
    // highest factor of the number then we are printing it out. if you want to include the number itself then you can use i<=n in the for loop.


    return 0;
}