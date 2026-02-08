#include <iostream>


#include "Circle.h"

Circle::Circle(int argc, char* argv[]) : IShape(argc, argv) {
    r = argc == 3 ? values[0] : 0;
}

float Circle::get_perimeter() {
    return 2*pi*r;
}

float Circle::get_area() {
    return pi*r*r;
}


void Circle::describe() {
    std::cout << "A circle has a radius." << std::endl;

    if (r!=0) {
	std::cout << "Circumference: " << get_perimeter() << std::endl;
	std::cout << "Area: " << get_area() << std::endl;
    }
}
