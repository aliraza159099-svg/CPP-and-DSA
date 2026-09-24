// Main.cpp (should not be changed)
#include <iostream>

#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Cube.h"
#include "Sphere.h"

using namespace std;

int main()
{
    const int shapes_count = 10;
    Shape * shapes[shapes_count];
    shapes[0] = new Circle("Circle 1", 5.0);
    shapes[1] = new Square("Square 1", 4.0);
    shapes[2] = new Rectangle("Rectangle 1", 6.0, 4.0);
    shapes[3] = new Sphere("Sphere 1", 3.0);
    shapes[4] = new Cube("Cube 1", 2.0);
    shapes[5] = new Circle("Circle 2", 6.0);
    shapes[6] = new Square("Square 2", 5.0);
    shapes[7] = new Rectangle("Rectangle 2", 7.0, 5.0);
    shapes[8] = new Sphere("Sphere 2", 4.0);
    shapes[9] = new Cube("Cube 2", 3.0);

    cout<<"Drawing the Shapes"<<endl;
    for(int i=0; i<shapes_count; i++)
        shapes[i]->draw();
    cout <<endl;

    cout<<"Getting Shapes Info"<<endl;
    for(int i=0; i<shapes_count; i++)
    {
        shapes[i]->info();
        cout <<endl;
    }

    return 0;
}
