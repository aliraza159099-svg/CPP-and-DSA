#include "Circle.h"
#include <iostream>
using namespace std;
//Calling its parents constractor
Circle::Circle(string name) : Shape_2D(name), radius(0.0) {}
//taking both the radius and the name of the circle
Circle::Circle(string name, double radius) : Shape_2D(name), radius(radius) {}
//implementing its draw method
void Circle::draw() {
    cout << "Drawing Circle '" << get_name() << "'\n";
}

void Circle::info() {
    std::cout << "I am a Circle '"<< get_name()
    << " of radius : " << radius << "'\n";
    Shape_2D::info();
}

double Circle::calculate_area() {
    //as the area is calculating in double
    double area = (22.0 / 7.0) * radius * radius;
    return area;
}

Circle::~Circle() {}
