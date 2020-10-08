//
// Created by diana on 7/10/2020.
//


#include"SerializationManager.h"

void SerializationManager::savePersonBinaryFile(Person person) {
    ofstream archivo;
    try { archivo.open("ArchivoBinario.dat", ios::app | ios::binary); }
    catch (std::ifstream::failure a) { cout << "no se pudo abrir el archivo"; }
    archivo.write((char *) &person, sizeof(Person));
    archivo.close();

}

void SerializationManager::serialize(PersonList personList, ISerialization *serializationMethod) {
    serializationMethod->serialize(personList);
}

void SerializationManager::deserialize(PersonList personList, ISerialization *serializationMethod) {
    serializationMethod->deserialize(personList);
}


void SerializationManager::load(Person &person) {
    ifstream archivo;

    try { archivo.open("ArchivoBinario.dat", ios::in | ios::binary); }

    catch (std::ifstream::failure a) {
        cout << "no se pudo abrir el archivo";
        exit(1);
    }
    archivo.read((char *) &person, sizeof(Person));

    archivo.close();
}

