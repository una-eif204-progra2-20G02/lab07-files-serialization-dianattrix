//
// Created by diana on 5/10/2020.
//

#ifndef LAB07_FILES_SERIALIZATION_PERSONLIST_H
#define LAB07_FILES_SERIALIZATION_PERSONLIST_H

#include"Person.h"
#include<vector>

class PersonList {
protected:
    vector<Person> personList;
public:
    ~PersonList() {
        personList.clear();
    }

    void addPerson(Person person) {
        personList.push_back(person);
    }

    Person getPerson(int position) {
        return personList.at(position);
    }

    int getListSize() {
        return personList.size();
    }

    string toString() {
        stringstream out;
        for (int init; init < personList.size(); init++) {
            out << personList[init].toString() << endl;
        }
        return out.str();
    }
};

#endif //LAB07_FILES_SERIALIZATION_PERSONLIST_H
