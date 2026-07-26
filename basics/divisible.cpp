#include <iostream>
using namespace std;
int main(){
    int l ;
    cout<< "Enter a number : "<< endl;
    cin>> l;
    if(l%5==0 ||l%3==0){
        cout<< "Divisible by 5 or 3";
    }
    else{
        cout<< "Not divisible by 5 or 3";
    }

    return 0;
}
