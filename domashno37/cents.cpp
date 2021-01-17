#include "cents.h"

Cents operator+(const Cents &c1, const Cents &c2){
    return Cents(c1.getCents() + c2.getCents());
}

Cents operator>(const Cents &c1, const Cents &c2){
    return Cents(c1.getCents() > c2.getCents());
}

Cents operator>=(const Cents &c1, const Cents &c2){
    return Cents(c1.getCents() >= c2.getCents());
}

Cents operator<(const Cents &c1, const Cents &c2){
    return Cents(c1.getCents() < c2.getCents());
}

Cents operator<=(const Cents &c1, const Cents &c2){
    return Cents(c1.getCents() <= c2.getCents());
}