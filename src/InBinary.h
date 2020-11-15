//
// Created by CAU on 14/11/2020.
//

#ifndef LAB7_INBINARY_H
#define LAB7_INBINARY_H

#include <sstream>
#include <fstream>
#include "IReadFrom.h"
#include "ISaveFrom.h"
#include "Person.h"

class InBinary: public IReadFrom, public ISaveFrom{

private:
public:
    InBinary();

    void saving(std::vector<Person>)override;

private:

    void saving (Person*person)override;

    std::vector<Person> reading()override;

};


#endif //LAB7_INBINARY_H
