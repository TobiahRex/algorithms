#ifndef SQUARE_H
#define SQUARE_H
using namespace std;

class Square {
  private:
    int *side;
  public:
    Square() {
      int temp_int = 1;
      side = new int;
      *side = temp_int;
    }
    Square(int sideLength) {
      side = new int;
      *side = sideLength;
    }
    ~Square(){
      delete side;
    }
    void getUserInput() {
      cout << "Please input the length of the side of the square: ";
      int temp_side;
      cin >> temp_side;
      if (temp_side >= 0) {
        this->setSide(temp_side);
      } else {
        cout << "Invalid width\n";
        exit(EXIT_FAILURE);
      }
    }
    void printResults() {
      cout << "The area of the square is " << this->findArea() << endl;
      cout << "The perimeter of the sqare is " << this->findPerimeter() << endl;
    }
    void runProgram() {
      this->getUserInput();
      this->printResults();
      cout << endl;
    }
    void setSide(int sideLength) {
      side = &sideLength;
    }
    float findArea() {
      return *side * *side;
    }
    float findPerimeter() {
      return 4 * *side;
    }
};

#endif
