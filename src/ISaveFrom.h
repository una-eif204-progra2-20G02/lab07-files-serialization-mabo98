//
// Created by CAU on 14/11/2020.
//

#ifndef LAB7_ISAVEFROM_H
#define LAB7_ISAVEFROM_H
#include <sstream>
#include <vector>
#include "Person.h"

class ISaveFrom {

public:

    virtual void saving(Person* person)=0;
    virtual void saving(std::vector<Person>)=0;
    ~ISaveFrom();

};
#endif //LAB7_ISAVEFROM_H
