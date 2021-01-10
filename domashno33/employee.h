#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_
#include "person.h"

class Employee:private Person{
public:
    float bill;
    float add_to_bill(float sumToAdd);
    float remove_from_bill(float sumToremove);
    void s_name(std::string name, std::string familia);
    std::string g_name();
};
#endif