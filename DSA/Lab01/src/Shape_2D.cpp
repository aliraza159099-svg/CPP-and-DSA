#include "Shape_2D.h"
#include <iostream>
using namespace std;

Shape_2D::Shape_2D(string name) : Shape(name) {}

void Shape_2D::info() {
    cout << "I am a 2D shape\n";
    cout << "My Surface Area is : "
    << calculate_area()
    << " square units"<<endl;
}

Shape_2D::~Shape_2D() {}
