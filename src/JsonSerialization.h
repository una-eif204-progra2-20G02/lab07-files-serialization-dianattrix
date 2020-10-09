//
// Created by diana on 5/10/2020.
//

#ifndef LAB07_FILES_SERIALIZATION_JSONSERIALIZATION_H
#define LAB07_FILES_SERIALIZATION_JSONSERIALIZATION_H

#include"ISerialization.h"
#include"Person.h"
#include <../lib/nlohmann/json.hpp>
#include<fstream>

using nlohmann::json;
using namespace std;

class JsonSerialization : public ISerialization {
protected:
    json jsonPeople;
    string peopleSerialize;
public:
    void to_json(Person &_person);

    void from_json(Person &_person);

    void serialize(PersonList personList) override;

    void deserialize(PersonList personList) override;


};


#endif //LAB07_FILES_SERIALIZATION_JSONSERIALIZATION_H

