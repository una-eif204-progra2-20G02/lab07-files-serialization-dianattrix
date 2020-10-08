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

    static void saveBinaryFile(const PersonList& personList);

    static void load(Person &person);

    static void serialize(const PersonList& personList, ISerialization *serializationMethod);

    static void deserialize(const PersonList& personList, ISerialization *serializationMethod);


};

#endif //LAB07_FILES_SERIALIZATION_SERIALIZATIONMANAGER_H
