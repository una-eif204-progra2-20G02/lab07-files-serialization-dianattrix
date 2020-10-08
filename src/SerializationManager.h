//
// Created by diana on 7/10/2020.
//

#ifndef LAB07_FILES_SERIALIZATION_SERIALIZATIONMANAGER_H
#define LAB07_FILES_SERIALIZATION_SERIALIZATIONMANAGER_H

#include<fstream>
#include"ISerialization.h"
#include"PersonList.h"
#include"Person.h"

using namespace std;

#include<iostream>

class SerializationManager {

public:

    void savePersonBinaryFile(Person person);

    void load(Person &person);

    void serialize(PersonList personList, ISerialization *serializationMethod);

    void deserialize(PersonList personList, ISerialization *serializationMethod);


};

#endif //LAB07_FILES_SERIALIZATION_SERIALIZATIONMANAGER_H
