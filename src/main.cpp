//
// Created by diana on 5/10/2020.
//

#include<iostream>

using namespace std;

#include"Person.h"
#include"SerializationManager.h"
#include"JsonSerialization.h"

int main() {

    ISerialization *jsonSerialization = new JsonSerialization();

    Person person1("Diana", 20, 117770654);
    Person person2("Carlos", 31, 123456789);
    Person person3("Noilyn", 26, 987654321);

    PersonList personList;
    personList.addPerson(person1);
    personList.addPerson(person2);
    personList.addPerson(person3);

    SerializationManager::saveBinaryFile(personList);
    SerializationManager::serialize(personList, jsonSerialization);
    SerializationManager::deserialize(personList, jsonSerialization);

    delete jsonSerialization;

    return 0;
};
