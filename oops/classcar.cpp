#include<iostream>
#include<string.h>
using namespace std;

class car {
public:
    int price;
    float seats;
    string name;

};
void print(car c){
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<endl;
}
int main(){
    car c1;
    c1.price=32;
    c1.seats=9.32;
    c1.name="toyota";
    
    car c2;
    c2.price=90000000;
    c2.seats=4;
    c2.name="suzuki";
    
    print(c1);
    print(c2);
    print(c2);
    return 0;

}