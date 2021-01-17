#include <iostream>

class Fraction{
private:
    int n;
    int d;
public:
    int getFraction();
    void setFraction(int n, int d);
    Fraction(int numerator=0, int deniminator=1 ):
        n{numerator}, d{deniminator}{}

    friend Fraction operator*(const Fraction &f1, const Fraction &f2);
    friend Fraction operator*(const Fraction &f1, int value);
    friend Fraction operator*(int value, const Fraction &f1);

    //void print() const {
    //    std::cout << n <<'/' << d << '\n' << std::endl;
    //}
};
std::ostream& operator<<(std::ostream &out, const Fraction &f1);
std::istream& operator>>(std::istream &in, const Fraction &f1);

