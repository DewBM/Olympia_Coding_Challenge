#ifndef SHAPE_FACTORY_H
#define SHAPE_FACTORY_H

#include <memory>

#include "IShape.h"

class ShapeFactory {
public:
    static std::unique_ptr<IShape> create_shape(int argc, char* argv[]);
};

#endif
