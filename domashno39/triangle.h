#include "shape.h"

class Triangle: public Shape {
public:
    Triangle(int a, int b):Shape(a, b){}
    float area(){return (width * height / 2);}
    virtual ~Triangle(){};
};