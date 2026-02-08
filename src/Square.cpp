#include <iostream>

#include "Square.h"

Square::Square(int argc, char* argv[]) : IShape(argc, argv) {
    length = argc == 3 ? values[0] : 0;
}

void Square::describe() {
    std::cout << "A square has four sides that are equal of length\n";

    if (length> 0) {
	std::cout << "Area: " << get_area() << std::endl;
	std::cout << "Perimeter: " << get_perimeter() << std::endl;
    }
}

float Square::get_area() {
    return length * length;
}

float Square::get_perimeter() {
    return 4 * length;
}
