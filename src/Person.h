//
// Created by diana on 5/10/2020.
//

#ifndef LAB07_FILES_SERIALIZATION_PERSON_H
#define LAB07_FILES_SERIALIZATION_PERSON_H

#include<iostream>
#include"strings.h"
#include<sstream>
#include <utility>

using namespace std;

struct Person {
    string name;
    int age;
    int id;

    Person() {
        name = "";
        age = 0;
        id = 0;
    }

    Person(string _name, int age, int id) {
        this->name = std::move(_name);
        this->age = age;
        this->id = id;
    }

    void setName(string _name) {
        Person::name = std::move(_name);
    }

    void setAge(int _age) {
        Person::age = _age;
    }

    void setId(int _id) {
        Person::id = _id;
    }

    string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    int getId() const {
        return id;
    }

    string toString() const {
        stringstream out;
        out << "Name: " << name << endl
            << "Age: " << age << endl
            << "Id: " << id << endl;
        return out.str();
    }

};


#endif //LAB07_FILES_SERIALIZATION_PERSON_H
