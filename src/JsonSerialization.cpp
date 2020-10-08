//
// Created by diana on 7/10/2020.
//

#include "JsonSerialization.h"

void JsonSerialization::serialize(PersonList personList) {

    jsonPeople["Person list: "] = {personList.toString()};

    peopleSerialize = jsonPeople.dump();
}

void JsonSerialization::deserialize(PersonList personList) {

    //guarda el archivo
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

