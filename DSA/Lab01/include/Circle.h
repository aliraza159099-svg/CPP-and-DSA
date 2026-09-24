#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape_2D.h"
using namespace std;
class Circle : public Shape_2D {
private:
    double radius;

public:
    Circle(string name);
    Circle(string name, double radius);
    virtual void draw() override;
    virtual void info() override;
    virtual double calculate_area() override;
    virtual ~Circle();
};

#endif

