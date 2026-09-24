#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape {
private:
    std::string name;

public:
    Shape(std::string name);
    virtual void draw() = 0;
    virtual void info() = 0;
    std::string get_name();
    virtual ~Shape();
};

#endif

