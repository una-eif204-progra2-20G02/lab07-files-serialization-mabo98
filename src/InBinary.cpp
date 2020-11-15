//
// Created by CAU on 14/11/2020.
//

#include "InBinary.h"
using namespace std;

void InBinary::saving (Person*person){

    ofstream archive;
    try{archive.open("BinaryArchive.dat", ios::out|ios::binary);}
    catch(std::ifstream::failure a){
        cout<<"WARNING: The file could not be opened"<<std::endl;
        exit(1);
    }
    archive.write((char*)person, sizeof(Person));
    archive.close();
}

void InBinary::saving(std::vector<Person>persons){

    ofstream archive;
    try{archive.open("BinaryArchive.dat", ios::out|ios::binary);}
    catch(std::ifstream::failure a){
        cout<<"WARNING: The file could not be opened"<<std::endl;
        exit(1);
    }
    for(Person person : persons){
        archive.write((char*)&person, sizeof(Person));
    }
    archive.close();
}

std::vector<Person> InBinary:: reading(){
    ifstream archive;
    try{archive.open("BinaryArchive.dat", ios::in|ios::binary);}
    catch(std::ifstream::failure a){
        cout<<"WARNING: The file could not be opened"<<std::endl;
        exit(1);
    }

    std::vector<Person> personList;
    Person person;

    while(!archive.eof()){
        archive.read((char*)&person, sizeof(Person));
        personList.push_back(person);
    }

    archive.close();
    personList.pop_back();
    return personList;
}