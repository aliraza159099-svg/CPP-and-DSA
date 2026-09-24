#include "Shape.h"
using namespace std;
Shape::Shape(string n)
 {
 name = n;
 }
//no implementation of the parents here
string Shape::get_name() {
    return name;
}
//default destructor
Shape::~Shape() {
}
