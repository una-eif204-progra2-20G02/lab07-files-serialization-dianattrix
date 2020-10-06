//
// Created by diana on 5/10/2020.
//

#ifndef LAB07_FILES_SERIALIZATION_PERSON_H
#define LAB07_FILES_SERIALIZATION_PERSON_H
#include<iostream>
#include"strings.h"
#include<sstream>
using namespace std;

struct Person
{
    char name[50];
    int age;
    int id;

    Person();
    Person(string _name, int age, int id)
    {
        strcpy(name, _name.c_str());
        this->age = age;
        this->id = id;
    }

};
#endif //LAB07_FILES_SERIALIZATION_PERSON_H
