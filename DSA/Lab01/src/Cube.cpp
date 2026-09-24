#include "Cube.h"
#include <iostream>
using namespace std;
Cube::Cube(string name) : Shape_3D(name), side(0.0) {}

Cube::Cube(std::string name, double side) : Shape_3D(name), side(side) {}

void Cube::draw() {
    std::cout << "Drawing Cube '" << get_name() << "'\n";
}

void Cube::info() {
    std::cout << "I am a Cube '" << get_name() << "' of side : " << side << "\n";
    Shape_3D::info();
}

double Cube::calculate_volume() {
    double volume = side * side * side;
    return volume;
}

Cube::~Cube() {}
