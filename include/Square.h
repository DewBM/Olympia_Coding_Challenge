#ifndef SQUARE_H
#define SQUARE_H

#include "IShape.h"

class Square : public IShape {
private:
    float length;

public:
    Square(int argc, char* argv[]);

    void describe() override;

protected:
    float get_area() override;
    float get_perimeter() override;
};

#endif
