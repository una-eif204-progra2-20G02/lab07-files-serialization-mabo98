//
// Created by CAU on 14/11/2020.
//
#include <iostream>
#include "Person.h"
#include "JsonManager.h"
#include "InBinary.h"
using namespace std;
int main() {
    Person person("123",23,"Fransisco");
    Person person1("456",43,"Alejandro");
    Person person2("789",32, "Javier");
    vector<Person> personList;
    personList.push_back(person);
    personList.push_back(person1);
    personList.push_back(person2);
    InBinary* binary = new InBinary();
    JsonManager* json = new JsonManager();
    string dataJson = json->serialize(personList);
    json->save(dataJson,"dataJson.json");
    binary->saving(personList);


    return 0;
}