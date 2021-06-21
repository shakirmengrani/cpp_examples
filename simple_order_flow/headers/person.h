#include "iostream"
using namespace std;

#ifndef PERSON_H
#define PERSON_H

class Person
{
private:
    string Name;
public:
    Person();
    void setName(string name);
    string getName();
};

#endif