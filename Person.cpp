// Definition of class Person

#include "Person.h"
using std::cout;
using std::endl;

Person::Person()
{
    _name = "NoName";
    _age = 0;
}

Person::Person(const string &n)
{
    _name = n;
}

Person::Person(const string &n, const int &a)
{
    _name = n;
    _age = a;
}

void Person::ToString()
{
    cout << "Name: " << _name << ", Age: " << _age << endl;
}

void Person::ToJson()
{
    cout << "[{\"Name\": \"" << _name << "\", \"Age\": " << _age << "}]"<< endl;
}

