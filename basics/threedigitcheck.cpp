#include <iostream>
using namespace std;
int main(){
    int l ;
    cout<< "Enter a number : "<< endl;
    cin>> l;
    if(l>=100 && l<=999){
        cout<< "Three digit number";

    }
    else{
        cout<< "Not a three digit number"<< endl;
    }

    //basically we can also write the above code in a different way like this

    if(l<100 || l>999){
        cout<< "Not a three digit number"<< endl;
    }
    else{
        cout<< "Three digit number"<< endl;
    }
    return 0;
}