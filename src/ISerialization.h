//
// Created by diana on 5/10/2020.
//

#ifndef LAB07_FILES_SERIALIZATION_ISERIALIZATION_H
#define LAB07_FILES_SERIALIZATION_ISERIALIZATION_H

#include"PersonList.h"

class ISerialization {
public:
    virtual ~ISerialization() = default;

    virtual void serialize(PersonList personList) = 0;

    virtual void deserialize(PersonList personList) = 0;
};

#endif //LAB07_FILES_SERIALIZATION_ISERIALIZATION_H
