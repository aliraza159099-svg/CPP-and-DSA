#ifndef SQUARE_H
#define SQUARE_H


#include "Shape_2D.h"
using namespace std;
//inheriting its parent class Shape-2D
class Square : public Shape_2D {
private:
    double side;

public:
    Square(string name);
    Square(string name, double side);
    virtual void draw() override;
    virtual void info() override;
    virtual double calculate_area() override;
    virtual ~Square();
};

#endif

