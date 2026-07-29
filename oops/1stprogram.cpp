#include<iostream>
#include<string.h>
using namespace std;

struct student {
    int roll;
    float cgpa;
    char name[100];

};
int main(){
    struct student s1;
    s1.roll=32;
    s1.cgpa=9.32;
    strcpy(s1.name,"shraddha");
    cout<<s1.name<<" ";


    return 0;

}