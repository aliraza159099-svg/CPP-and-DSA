#include "Shape_3D.h"
#include <iostream>
using namespace std;

Shape_3D::Shape_3D(string name) : Shape(name) {}

void Shape_3D::info() {
    cout << "I am a 3D shape\n";
    cout << "My Volume is : " << calculate_volume() << " cunic units"<<endl;
}

Shape_3D::~Shape_3D() {}

