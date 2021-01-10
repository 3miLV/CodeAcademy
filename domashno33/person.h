#ifndef _PERSON_H_
#define _PERSON_H_
#include <iostream>
#include <string>
#include "address.h"

class Person{
public:
    std::string first_name;
    std::string last_name;
    unsigned int egn;
    int height;
    int weight;
    std::string eyes;
    Address address;
    void set_name(std::string name, std::string familia);
    std::string get_name();
};
#endif