#ifndef SHAPE_3D_H
#define SHAPE_3D_H

#include "Shape.h"
using namespace std;
class Shape_3D : public Shape
{
    public:
    Shape_3D(string name);
    virtual void info();//after info we may write override or not
    virtual double calculate_volume() = 0;
    virtual ~Shape_3D();
};

#endif // SHAPE_3D_H
