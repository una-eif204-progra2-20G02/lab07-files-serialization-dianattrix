//
// Created by diana on 5/10/2020.
//

#ifndef LAB07_FILES_SERIALIZATION_JSONSERIALIZATION_H
#define LAB07_FILES_SERIALIZATION_JSONSERIALIZATION_H

#include"ISerialization.h"

class JsonSerialization : public ISerialization {
public:
    void serialize() override;
};

#endif //LAB07_FILES_SERIALIZATION_JSONSERIALIZATION_H

