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

   void print(){
    cout<<name<<" "<<runs<<" "<<endl;
}


};

int main (){
    Cricketer c1;
    c1.name = "Virat kohli";
    c1.runs = 1000;
   
    Cricketer c2("Rohit sharma",800);

    c1.print();
    c2.print();

    return 0;

}