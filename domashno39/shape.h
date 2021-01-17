#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>

class Shape{
protected:
    int width, height;
public:
    Shape(int a, int b)
    :width(a),
    height(b){}
    virtual float area(){return 0;};
    virtual ~Shape(){};
};

#endif
