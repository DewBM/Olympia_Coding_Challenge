#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "IShape.h"

class Rectangle : public IShape {
private:
    float length;
    float width;

public:
    Rectangle(int argc, char* argv[]);

    void describe() override;

protected:
    float get_area() override;
    float get_perimeter() override;
};

#endif
