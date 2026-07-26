#include <iostream>
using namespace std;
int main(){
    int n;

    //ap fourmula will be used nth=a+(n-1)d

    cout<< "Enter a number : "<< endl;
    cin>> n;

    for(int i = 1; i<=2*n-1; i+=2){
        cout<<i<< " ";
    }

   // method 2
   // using extra variable & keeping i only for the iterations rounds ??

    int a = 1;
    cout<< "Enter a number : "<< endl;
    cin>> n;

    for(int i = 1; i<=n; i++){
        cout<<a<< " ";
        a=a+2;
    }


    return 0;
}
