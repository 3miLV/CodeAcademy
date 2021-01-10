#include "dog.h"
#include "animal.h"
#include "employee.h"
#include "person.h"

int main(){

    Dog pitbull;
    pitbull.name = "Sharo";
    pitbull.age = 2;
    std::cout << pitbull.name << " e na " << pitbull.age << " godini" << std::endl;

    Employee pesho;
    pesho.s_name("Petar", "Petrov");
    pesho.bill = 0;
    pesho.add_to_bill(12.50);
    std::cout << pesho.g_name() << " разполага с " << pesho.bill << " лв." << std::endl;
    pesho.remove_from_bill(1.50);
    std::cout << pesho.g_name() << " разполага с " << pesho.bill << " лв." << std::endl;
    return 0;
}