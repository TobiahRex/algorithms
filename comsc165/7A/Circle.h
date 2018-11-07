#ifndef CIRCLE_H
#define CIRCLE_H

namespace lab7 {
  class Circle {
    private:
      int radius;
    public:
      int getRadius() const {
        return radius;
      }
      double getArea() const {
        return (3.14159 * radius * radius);
      }
      void setRadius(int r) {
        radius = r;
      }
  }


}

#endif
