CXX = g++
CXXFLAGS = -Wall -g -Iinclude

SRC_DIR = src
SRC = $(wildcard $(SRC_DIR)/*.cpp)

OBJ = $(patsubst %.cpp,%.o,$(SRC))

TARGET = describe_object

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $@

%.o: %.c
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

clean_all:
	rm -f $(OBJ) $(TARGET)
