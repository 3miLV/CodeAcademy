#include "shape.h"

class Rectangle: public Shape{
public:
    Rectangle(int a, int b):Shape(a, b){}
    float area(){return (width * height);}
    virtual ~Rectangle(){};
};