#include<iostream>

using namespace std;

class car {
public:
    int price;
    float seats;
    string name;


    car(string s,int r,float f){
        name = s;
        seats = f;
        price = r;



    }

};
void print(car c){
    cout<<"the specifications are"<<" "<<endl;
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<endl;
}
int main(){
    car c1("toyota" ,3500 , 350.5);
    

    print(c1);

    return 0;

}