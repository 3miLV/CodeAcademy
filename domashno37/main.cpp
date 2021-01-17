#include "fraction.h"
#include "cents.h"

int main(){
    Fraction f1{2,5};
    //f1.print();
    Fraction f2{3,8};
    //f2.print();
    Fraction f3{f1 * 2};
    //f3.print();
    Fraction f4{Fraction{2,3} * Fraction{3,4}};

    Cents cents1(10);
    Cents cents2(10);
    Cents centsSum = cents1 + cents2;
    std::cout << "I have " << centsSum.getCents() << " cents." << std::endl;
    Cents centCheck = cents1 < cents2;
    std::cout << (centCheck.getCents() ? "true": "false") << std::endl;

    Fraction f5;
    std::cout << "Enter fraction 1: ";
    //std::cin >> f5;

    Fraction f6;
    std::cout << "Enter fraction 2: ";
    //std::cin >> f6;

    std::cout << f5 << " * " << f6 << " is " << f5 * f6 << '\n'; 

    return 0;
}
