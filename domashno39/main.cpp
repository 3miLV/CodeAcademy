#include "shape.h"
#include "rectangle.h"
#include "triangle.h"
#include "circle.h"
#include <cstdio>
#include <math.h>

/*
void draw(Shape* arg){
    const int rad = arg->area();
    const int tol = 3;
    for(int x=-rad;x<=rad;x++){
        for(int y=-rad;y<=rad;y++){
            int eq = x*x +y*y - rad * rad;
            printf(abs(eq) < tol ? "*" : " ");
        }
        printf("\r\n");
    }
}*/

float draw(Shape* fig){
    return fig->area();
}

int main(int argc, char* argv[]){
    Shape *shape;
    Rectangle rec(10, 7);
    Triangle tri(10, 5);
    Circle cir(6, 5);

    shape = &rec;
    std::cout << "area of rectangle = " << shape->area() << std::endl;
    shape = &tri;
    std::cout << "area of triangle = " << shape->area() << std::endl;
    shape = &cir;
    std::cout << "area of circle = " << shape->area() << std::endl;
    std::cout << draw(&cir);
    return 0;
}
