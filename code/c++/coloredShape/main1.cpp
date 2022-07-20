#include "Rectangle.h"
#include "Circle.h"

int main(int argc, char **argv) {
  Circle s1(2.0, "green");
  ColoredShape *s2 = new Rectangle(3.0, 1.0, "blue");  
  //  Shape *s3 = new Rectangle(3.0,2.0,"blue");
  //  Shape *s4 = new Square(3.0, "pink");

  s1.printArea(std::cout);
  s2->printArea(std::cout);
  //  s3->printArea(std::cout);
  //  s4->printArea(std::cout);
  delete s2;
  return 0;
}


