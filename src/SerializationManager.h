//
// Created by diana on 7/10/2020.
//

#ifndef LAB07_FILES_SERIALIZATION_SERIALIZATIONMANAGER_H
#define LAB07_FILES_SERIALIZATION_SERIALIZATIONMANAGER_H

#include<fstream>
#include"ISerialization.h"
#include"BinaryFile.h"
#include"PersonList.h"
#include"Person.h"
#include<iostream>

using namespace std;


class SerializationManager {

public:

    void saveBinaryFile(PersonList personList, BinaryFile* binaryFile);

    void load(Person &person);

    void serialize(PersonList personList, ISerialization *serializationMethod);

    void deserialize(PersonList personList, ISerialization *serializationMethod);


};

#endif //LAB07_FILES_SERIALIZATION_SERIALIZATIONMANAGER_H
