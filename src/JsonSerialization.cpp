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
    ofstream archivo;
    try { archivo.open("ArchivoTexto.json", ios::binary); }
    catch (ifstream::failure a) {
        cout << "No se pudo abrir el archivo";
        exit(1);
    }

    archivo << peopleSerialize << '\n';

    archivo.close();

    ifstream archivo1;
    string texto;
    try { archivo1.open("ArchivoTexto.json", ios::binary); }
    catch (ifstream::failure a) {
        cout << "No se pudo abrir el archivo";
        exit(1);
    }
    cout << endl;
    while (!archivo1.eof()) {
        getline(archivo1, texto);
        cout << texto << endl;
    }
    archivo1.close();
}

