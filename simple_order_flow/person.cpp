#include "headers/person.h"
#include "iostream"
using namespace std;
string Name;

Person::Person(){

};

void Person::setName(string name){
    Name = name;
}

string Person::getName(){
    return Name;
};
