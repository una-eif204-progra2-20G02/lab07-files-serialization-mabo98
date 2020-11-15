//
// Created by CAU on 14/11/2020.
//

#ifndef LAB7_JSONMANAGER_H
#define LAB7_JSONMANAGER_H
#include <../lib/nlohmann/json.hpp>
#include <sstream>
#include <fstream>
#include <iostream>
#include "Person.h"
using nlohmann::json;

class JsonManager {
public:
    static void save(const std::string &jsonData, const std::string &filename);

    static std::string read(const std::string &filename);

    static std::string serialize(const std::vector<Person> &person);

    static Person deserialize(const std::string &_data);

    virtual ~JsonManager();
};


#endif //LAB7_JSONMANAGER_H
