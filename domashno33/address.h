#ifndef _ADDRESS_H_
#define _ADDRESS_H_
#include <iostream>
#include <string>

class Address{
    public:
        std::string city;
        std::string country;
        std::string street;
        int number;
        std::string district;
        int building;
};
#endif