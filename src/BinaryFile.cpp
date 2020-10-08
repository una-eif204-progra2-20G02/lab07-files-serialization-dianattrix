//
// Created by diana on 7/10/2020.
//

#include "BinaryFile.h"

void BinaryFile::savePersonBinaryFile(PersonList personList) {
    ofstream archivo;
    try { archivo.open("BinaryFile.dat", ios::app | ios::binary); }
    catch (std::ifstream::failure a) { cout << "Can not open file"; }
    archivo.write((char *) &personList, sizeof(PersonList));
    archivo.close();
}

