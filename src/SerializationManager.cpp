//
// Created by diana on 7/10/2020.
//


#include"SerializationManager.h"

void SerializationManager::saveBinaryFile(PersonList personList, BinaryFile* binaryFile) {
    binaryFile->savePersonBinaryFile(personList);
}

void SerializationManager::serialize(PersonList personList, ISerialization *serializationMethod) {
    serializationMethod->serialize(personList);
}

void SerializationManager::deserialize(PersonList personList, ISerialization *serializationMethod) {
    serializationMethod->deserialize(personList);
}


void SerializationManager::load(Person &person) {
    ifstream archivo;

    try { archivo.open("BinaryFile.dat", ios::in | ios::binary); }

    catch (std::ifstream::failure a) {
        cout << "Can not open file";
        exit(1);
    }
    archivo.read((char *) &person, sizeof(Person));

    archivo.close();
}

