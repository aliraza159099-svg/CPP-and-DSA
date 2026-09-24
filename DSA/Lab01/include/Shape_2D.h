#ifndef SHAPE_2D_H
#define SHAPE_2D_H

#include "Shape.h"

class Shape_2D : public Shape {
public:
    Shape_2D(std::string name);
    virtual void info() override;
    virtual double calculate_area() = 0;
    virtual ~Shape_2D();
};

#endif
