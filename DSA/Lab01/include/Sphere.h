#ifndef SPHERE_H
#define SPHERE_H

#include "Shape_3D.h"
using namespace std;
class Sphere : public Shape_3D {
private:
    double radius;

public:
    Sphere(string name);
    Sphere(string name, double radius);
    virtual void draw() override;
    virtual void info() override;
    virtual double calculate_volume() override;
    virtual ~Sphere();
};

#endif
