#include<iostream>
using namespace std;
class student{
public:
int rno;
string name;
private:
float marks;// this will give error

};
int main (){
    student s;
    s.rno=76; // accesmode
    
    return 0;
}