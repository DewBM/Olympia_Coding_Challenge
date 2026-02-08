#include "IShape.h"

IShape::IShape(int argc, char* argv[]) {
    for (int i=2; i < argc; i++) {
	values.push_back(std::stof(argv[i]));
    }
}
