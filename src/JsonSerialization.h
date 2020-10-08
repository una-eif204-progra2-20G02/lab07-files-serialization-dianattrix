//
// Created by diana on 5/10/2020.
//

#ifndef LAB07_FILES_SERIALIZATION_JSONSERIALIZATION_H
#define LAB07_FILES_SERIALIZATION_JSONSERIALIZATION_H

#include"ISerialization.h"
#include <../lib/nlohmann/json.hpp>
#include<fstream>

using json = nlohmann::json;
using namespace std;

class JsonSerialization : public ISerialization {
protected:
    json jsonPeople;
    string peopleSerialize;
public:
    void serialize(PersonList personList) override;

    void deserialize(PersonList personList) override;
};


#endif //LAB07_FILES_SERIALIZATION_JSONSERIALIZATION_H

