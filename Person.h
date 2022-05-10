// Declaration class of Person

#ifndef NEWDELETE5_PERSON_H
#define NEWDELETE5_PERSON_H

#include <iostream>
using std::string;

class Person
{
private:
    string _name;
    int _age;
public:
    Person();
    Person(const string& n);
    Person(const string&n, const int& a);
    void ToString();
    void ToJson();
};


#endif //NEWDELETE5_PERSON_H
