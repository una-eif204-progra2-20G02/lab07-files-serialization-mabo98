//
// Created by CAU on 14/11/2020.
//

#ifndef LAB7_IREADFROM_H
#define LAB7_IREADFROM_H
#include <sstream>
#include <vector>
#include "Person.h"

class IReadFrom {

private:
    virtual std::vector<Person> reading()=0;
    ~IReadFrom();

};

#endif //LAB7_IREADFROM_H
