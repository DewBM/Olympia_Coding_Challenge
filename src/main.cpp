#include "ShapeFactory.h"

int main(int argc, char* argv[]) {

    std::unique_ptr<IShape> shape = ShapeFactory::create_shape(argc, argv);
    shape->describe();

    return 0;
}
