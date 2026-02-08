#include <iostream>

#include "Rectangle.h"

Rectangle::Rectangle(int argc, char* argv[]) : IShape(argc, argv) {
    length = argc >= 3 ? values[0] : 0;
    width = argc >=3 ? values[1] : 0;
}

void Rectangle::describe() {
    std::cout << "A rectangle has 4 sides broken into 2 side pairs of equal length and are parallel.\n";

    if (length > 0 && width > 0) {
	std::cout << "Area: " << get_area() << std::endl;
	std::cout << "Perimeter: " << get_perimeter() << std::endl;
    }
}

float Rectangle::get_area() {
    return length * width;
}

float Rectangle::get_perimeter() {
    return (2*length) + (2*width);
}
