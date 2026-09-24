#ifndef CUBE_H
#define CUBE_H
using namespace std;
#include "Shape_3D.h"
//its parent is the Shape_3D
class Cube : public Shape_3D {
private:
    double side;

public:
    Cube(string name);
    Cube(string name, double side);
    virtual void draw() override;
    virtual void info() override;
    virtual double calculate_volume() override;
    virtual ~Cube();
};

#endif
