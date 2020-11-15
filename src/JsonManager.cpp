//
// Created by CAU on 14/11/2020.
//

#include "JsonManager.h"

void to_json(json &_json, const Person &person) {
    _json["id"] = person.getId();
    _json["name"] = person.getName();
    _json["age"] = person.getAge();
}

/**
 * Custom from_json method automatically called.
 * @param _json  the Json Object
 * @param _person the Model
 */
void from_json(const json &_json, Person & person) {
    person.setId(_json.at("id"));
    person.setName(_json.at("name"));
    person.setAge(_json.at("age"));
}

/**
 * This method will serialize the vector
 * @param _personList
 * @return the string with the json array
 */
std::string JsonManager::serialize(const std::vector<Person> &personList) {
    json jsonData(personList);
    std::string jsonArray = jsonData.dump();
    return jsonArray;
}

/**
 * This method deserialize the string to object
 * @param _data the string json data
 * @return the array of objects
 */
Person JsonManager::deserialize(const std::string &_data) {
    json jsonData = json::parse(_data);
    Person person = jsonData;

    return person;
}

/**
 * This method will save a serialized string into JSON File
 * @param jsonData the string data
 * @param filename the name of the file
 */
void JsonManager::save(const std::string &jsonData, const std::string &filename) {
    std::ofstream file(filename, std::ofstream::out);
    file << jsonData;
    file.close();
}


std::string JsonManager::read(const std::string &filename) {
    std::string txtContent;

    try {
        std::ifstream file(filename);
        file.exceptions(std::ifstream::failbit | std::ifstream::badbit);

        std::stringstream buffer;
        buffer << file.rdbuf();
        std::string fileContent(buffer.str());
        txtContent = fileContent;
    }
    catch (std::ifstream::failure e) {
        throw std::runtime_error("Exception opening/reading/closing file");
    }

    return txtContent;
}

JsonManager::~JsonManager() {

}
