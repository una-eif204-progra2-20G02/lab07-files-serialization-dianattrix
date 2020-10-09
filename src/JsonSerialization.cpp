//
// Created by diana on 7/10/2020.
//

#include "JsonSerialization.h"


void JsonSerialization::to_json(Person &_person) {
    jsonPeople = json{
            {"id",   _person.getId()},
            {"name", _person.getName()},
    };
}

void JsonSerialization::from_json(Person &_person) {
    _person.setId(jsonPeople.at("id").get<int>());
    _person.setName(jsonPeople.at("name").get<std::string>());
}

void JsonSerialization::serialize(PersonList personList) {
    jsonPeople[personList.toString()];
    peopleSerialize = jsonPeople.dump();
}

void JsonSerialization::deserialize(PersonList personList) {
    
    ofstream file;
    try { file.open("TextFile.json", ios::binary); }
    catch (ifstream::failure a) {
        cout << "Can not open file";
        exit(1);
    }

    file << peopleSerialize << '\n';

    file.close();

    ifstream file1;
    string texto;
    try { file1.open("TextFile.json", ios::binary); }
    catch (ifstream::failure a) {
        cout << "Can not open file";
        exit(1);
    }
    cout << endl;
    while (!file1.eof()) {
        getline(file1, texto);
        cout << texto << endl;
    }
    file1.close();
}

