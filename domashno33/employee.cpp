#include "employee.h"
#include "person.h"

float Employee::add_to_bill(float sumToAdd){
    bill +=  sumToAdd;
    return bill;
}

float Employee::remove_from_bill(float sumToRemove){
    bill -= sumToRemove;
    return bill;
}

void Employee::s_name(std::string name, std::string familia){
    first_name = "Georgi";
    last_name = "Georgiev";
    std::cout << first_name << last_name << std::endl;
}

std::string Employee::g_name(){
    return first_name + " " + last_name;
}
