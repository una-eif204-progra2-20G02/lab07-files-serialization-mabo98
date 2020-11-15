//
// Created by CAU on 14/11/2020.
//

#ifndef MY_PROJECT_NAME_PERSON_H
#define MY_PROJECT_NAME_PERSON_H
#include <iostream>

class Person {
private:
    std::string id;
    int age;
    std::string name;
public:
    Person();

    Person(const std::string &id, int age, const std::string &name);

    virtual ~Person();

    const std::string &getId() const;

    void setId(const std::string &id);

    int getAge() const;

    void setAge(int age);

    const std::string &getName() const;

    void setName(const std::string &name);

};


#endif //MY_PROJECT_NAME_PERSON_H
