#ifndef I_SHAPE_H
#define I_SHAPE_H

#include <vector>
#include <string>

class IShape {
protected:
    std::vector<float> values;

    IShape(int argc, char* argv[]);

    virtual float get_perimeter() = 0;
    virtual float get_area() = 0;

public:
    virtual void describe() = 0;
};

#endif
