/*
  Extend Lab 7A-2 as follows:

  •Fill in the code so that the following input and output will be generated:

  - Please input the length of the side of the square 8
  - The area of the square is 64
  - The perimeter of the square is 32

  •Add two constructors and a destructor to the class and create the implementation of each.
  One constructor is the default constructor that sets the side to 1.
  The other constructor will allow the user to initialize the side at the definition of the object.
  The destructor does not have to do anything but reclaim memory space.
  Create an object called box1 that gives the value of 9 to the constructor at the definition.
  Add output statements so that the following is printed in addition to what is printed above.

  - The area of box1 is 81
  - The perimeter of box1 is 36
*/
#include <iostream>
#include <cstdlib>
#include "Square.h"
using namespace std;

int main(){
  Square *box = new Square();
  box->runProgram();

  Square *box1 = new Square(9);
  box1->printResults();
  delete box1;

  return 0;
}
