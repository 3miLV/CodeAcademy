#include "fraction.h"

Fraction operator*(const Fraction &f1, const Fraction &f2){
    return{f1.n * f2.n * f1.d * f2.d};
}

Fraction operator*(const Fraction &f1, int value){
    return{f1.n * f1.d};
}

int Fraction::getFraction(){
    return n * d;
}

void Fraction::setFraction(int n, int d){
    this->n = n;
    this->d = d;
}



Fraction operator*(int value, const Fraction &f1){
    return{f1.n * f1.d};
}

/*
std::ostream& operator<<(std::ostream &out, const Fraction &f1){
    out << f1.n << "/" << f1.d;
    return out;
}

std::istream& operator>>(std::istream &in, const Fraction &f1){
    in >> f1.n;
    in >> f1.d;
    return in;
}*/
