#include "Square.h"
#include <iostream>
using namespace std;
//Calling its parents constractor
Square::Square(string name) : Shape_2D(name), side(0.0) {}
//taking both the square and the name of the square
Square::Square(string name, double side) : Shape_2D(name), side(side){}
//implementing its draw method
void Square::draw() {
    cout << "Drawing square '" << get_name() << "'\n";
}

void Square::info() {
    std::cout << "I am a Square '"<< get_name()
    << " of side : " << side << "'\n";
    Shape_2D::info();
}

double Square::calculate_area() {
    //as the area is calculating in double
    double area = side * side;
    return area;
}

Square::~Square() {}
