#ifndef RECTANGLE_H
#define RECTANGLE_H


#include "Shape_2D.h"
using namespace std;
//inheriting its parent class Shape-2D
class Rectangle : public Shape_2D {
private:
    double length;
    double width;

public:
    Rectangle(string name);
    Rectangle(string name, double length, double width);
    virtual void draw() override;
    virtual void info() override;
    virtual double calculate_area() override;
    virtual ~Rectangle();
};

#endif
