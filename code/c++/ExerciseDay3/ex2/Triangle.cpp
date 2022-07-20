#include "Triangle.h"

int Triangle::numTri = 0;

Triangle::~Triangle() {
  numTri--;
  std::cout << "Triangle Destructor " << this->getColor() << "\n";
}

Triangle::Triangle(double b, double h, string color)
  :ColoredShape(color), base(b), height(h)
{
  numTri++;
  area = 0.5 *base * height;
}

double
Triangle::getArea(void) {
  return area; // 0.5*base*height;
}

void 
Triangle::printArea(std::ostream &s) {
  s << "Triangle: color: " << this->getColor() << ", area: "
    << area << " numTri: " << numTri << "\n";
}

