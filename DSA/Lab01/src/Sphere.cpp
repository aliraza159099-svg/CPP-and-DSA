#include "Sphere.h"
#include <iostream>
using namespace std;
Sphere::Sphere(string name) : Shape_3D(name), radius(0.0) {}

Sphere::Sphere(string name, double radius) : Shape_3D(name), radius(radius) {}

void Sphere::draw() {
    cout << "Drawing Sphere '" << get_name() << "'\n";
}

void Sphere::info() {
    cout << "I am a Sphere '" << get_name() << "' of radius : " << radius << "\n";
    Shape_3D::info();
}

double Sphere::calculate_volume() {
    return (4.0 / 3.0) * (22.0 / 7.0) * radius * radius * radius;
}

Sphere::~Sphere() {}
