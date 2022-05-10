// Menu that input and output user-input

#ifndef NEWDELETE5_MENU_H
#define NEWDELETE5_MENU_H

#include <iostream>
#include "Person.h"

using std::cout;
using std::endl;
using std::cin;

void Menu()
{
    cout << endl;
    int size = 0;
    cout << "Set size of array:";
    cin >> size;
    Person* people[size];                      // array type class Person

    if(size > 1)                              // just grammer, size more than one then plural
    {
        cout << "List " << size << " people in array: " << endl;
    } else if(size == 1)
    {
        cout << "List " << size << " person in array: " << endl;
    }

    //input
    for(size_t i = 0; i < size; ++i)
    {
        string n = "";
        int a = 0;
        cout << i+1 << ") Set name: ";
        cin >> n;
        cout << "  set age:";
        cin >> a;
        people[i] = new Person(n,a);            // dynamically allocate new memory in array
    }
    //output
    cout << endl;
    if(size > 1)
    {
        cout << "The people in array: " << endl;
    } else if(size == 1)
    {
        cout << "The person in array:  " << endl;
    }
    cout << endl;

    for(size_t i = 0; i < size; ++i)
    {
        people[i]->ToString();
        people[i]->ToJson();
        cout << endl;
    }

    //delete
    for(size_t i = 0; i < size; ++i)
    {
        delete people[i];                    // delete each memory that are allocated in array
    }
}


#endif //NEWDELETE5_MENU_H
