//
// Created by diana on 5/10/2020.
//

#ifndef LAB07_FILES_SERIALIZATION_PERSONLIST_H
#define LAB07_FILES_SERIALIZATION_PERSONLIST_H
#include"Person.h"
#include<vector>

class PersonList
{
protected:
    vector<Person> personList;
public:
    void addPerson(Person person)
    {
        personList.push_back(person);
    }

};
#endif //LAB07_FILES_SERIALIZATION_PERSONLIST_H
