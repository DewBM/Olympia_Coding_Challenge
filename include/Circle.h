#ifndef CIRCLE_H
#define CIRCLE_H

#include "./IShape.h"

class Circle : public IShape {
private:
    double pi = 3.14159265358979323846;
    float r;

public:
    Circle(int argc, char* argv[]);
    virtual void describe() override;

protected:
    float get_perimeter() override;
    float get_area() override;
};

#endif
