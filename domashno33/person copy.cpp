#include "person.h"

void Person::set_name(std::string name, std::string familia){
    first_name = name;
    last_name = familia;
}

std::string Person::get_name(){
    return first_name + " " + last_name;
}