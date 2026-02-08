#include "ShapeFactory.h"
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"

std::unique_ptr<IShape> ShapeFactory::create_shape(int argc, char* argv[]) {
    std::string object = argv[1];
    if (object == "circle") {
	return std::make_unique<Circle>(argc, argv);
    }
    else if (object == "square") {
	return std::make_unique<Square>(argc, argv);
    }
    else if (object == "rect") {
	return std::make_unique<Rectangle>(argc, argv);
    }
}
