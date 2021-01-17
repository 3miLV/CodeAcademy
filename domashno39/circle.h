#include "shape.h"
#include "cmath"

class Circle: public Shape{
public:
    Circle(int a, int b):Shape(a, b){}
    float area(){
        const float pi = 3.14;
        float r = (pow(width,2)+ pow(height,2)) / (2*height);
        return (2 * r);
    }
    virtual ~Circle(){};
};