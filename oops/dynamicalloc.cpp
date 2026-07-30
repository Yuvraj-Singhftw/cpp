#include<iostream>
using namespace std;


//class
class Cricketer{
public:
     string name;
     int runs;
     Cricketer(){

    
     }
     Cricketer(string name, int runs){
        this->name = name;
        this->runs = runs;
     }





};

int main (){
    Cricketer c1("Virat kohli" , 900);
    Cricketer* c2 = new Cricketer("Rohit sharma",800);

    int *ptr = new int(54);
    cout<<*ptr<<" ";
    cout<<c2->name<<" "<<c2->runs<<" ";
    return 0;

}