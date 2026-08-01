#include<iostream>
using namespace std;
class Scooty{
public:
int speed;
string name;


};
class Bike : public Scooty{ //child class and derived class
public:
int gears;
};


int main (){
    Bike b1;
    b1.speed = 180;
    
}