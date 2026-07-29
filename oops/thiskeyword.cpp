#include<iostream>
using namespace std;


//class
class Cricketer{
public:
     string name;
     int runs;
     Cricketer(){

    
     }
     Cricketer(string s, int r){
        name = s;
        runs = r;
     }

};
void print(Cricketer c){
    cout<<c.name<<" "<<c.runs<<" "<<endl;
}
int main (){
    Cricketer c1;
    c1.name = "Virat kohli";
    c1.runs = 1000;
   
    Cricketer c2("Rohit sharma",800);

    print(c2);

    return 0;

}