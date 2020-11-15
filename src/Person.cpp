//
// Created by CAU on 14/11/2020.
//

#include "Person.h"

Person::Person() {}

Person::Person(const std::string &id, int age, const std::string &name) : id(id), age(age), name(name) {}

Person::~Person() {

}

const std::string &Person::getId() const {
    return id;
}

void Person::setId(const std::string &id) {
    Person::id = id;
}

int Person::getAge() const {
    return age;
}

void Person::setAge(int age) {
    Person::age = age;
}

const std::string &Person::getName() const {
    return name;
}

void Person::setName(const std::string &name) {
    Person::name = name;
}
