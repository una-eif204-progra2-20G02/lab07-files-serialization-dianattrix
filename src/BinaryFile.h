//
// Created by diana on 7/10/2020.
//

#ifndef LAB07_FILES_SERIALIZATION_BINARYFILE_H
#define LAB07_FILES_SERIALIZATION_BINARYFILE_H

#include"PersonList.h"
#include<fstream>

class BinaryFile {
public:
    void savePersonBinaryFile(PersonList person);
};

#endif //LAB07_FILES_SERIALIZATION_BINARYFILE_H
