#include <iostream>
#include <limits>
#include <string>
using namespace std;

const float PI{3.14};

float calcArea(int);
float calcCircumference(int);

int main() {
  bool run = true;
  while(run) {
    string lineBreak(20, '_');
    cout << lineBreak
    << "\n\nWhat is the radius of the circle?" << endl
    << "Press '-1' to Exit. \n\n" << endl
    << "Radius: ";

    float radius{};
    cin >> radius;

    if (radius == -1) {
      run = false;
    } else if (!radius || cin.bad() || cin.fail()) {
      cout << "\nThat is not a valid input.  Please try again. " << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else {
      float area = calcArea(radius);
      cout << "Area: " << area << endl;
      float circ = calcCircumference(radius);
      cout << "Circumference: " << circ << endl;
    }
  }
  return 0;
}


float calcArea(int r) {
  return (PI * r * r);
}

float calcCircumference(int r) {
  return (2 * PI * r);
}
