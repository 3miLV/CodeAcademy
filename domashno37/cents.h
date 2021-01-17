#include <iostream>

class Cents{
    private:
        int cents;
    public:
        Cents(int c){cents = c;}
        int getCents() const {return cents;}
};
Cents operator+(const Cents &c1, const Cents &c2);
Cents operator>(const Cents &c1, const Cents &c2);
Cents operator>=(const Cents &c1, const Cents &c2);
Cents operator<(const Cents &c1, const Cents &c2);
Cents operator<=(const Cents &c1, const Cents &c2);
