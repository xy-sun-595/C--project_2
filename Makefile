# Makefile
CXX = g++
CXXFLAGS = -std=c++11 -Wall
TARGET = HW2main
SOURCES = HW2main.cpp pi_approx.cpp approximations.cpp
OBJECTS = $(SOURCES:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS) -lm

clean:
	rm -f $(OBJECTS) $(TARGET)