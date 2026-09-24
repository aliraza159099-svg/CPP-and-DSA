#include "Rectangle.h"
#include <iostream>
using namespace std;
//Calling its parents constractor
Rectangle::Rectangle(string name) : Shape_2D(name), length(0.0), width(0.0) {}
//taking both the radius and the name of the circle
Rectangle::Rectangle(string name, double length, double width) : Shape_2D(name), length(length), width(width) {}
//implementing its draw method
void Rectangle::draw() {
    cout<<"Drawing a rectangle "<<get_name()<<endl;
}

void Rectangle::info() {
    cout << " I am a rectangle ' "<< get_name()
    << "' of length : " << length<<" and width "<<width << endl;
    Shape_2D::info();
}

double Rectangle::calculate_area() {
    //as the area is calculating in double
    double area = length * width;
    return area;
}

Rectangle::~Rectangle() {}
