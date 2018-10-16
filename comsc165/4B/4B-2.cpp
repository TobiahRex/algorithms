#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main() {
  const int SIZE_1{20}, SIZE_2{10};
  char c[SIZE_1], n1[SIZE_2], n2[SIZE_2];
  double number1{}, number2{};
  cout << "Enter a First & Last Name (max length = 20): \n";
  cin.getline(c, SIZE_1);

  cout << "Enter a Number (max length = 10): ";
  cin.getline(n1, SIZE_2);
  number1 = atof(n1);

  cout << "Enter a Second Number (max length = 10): ";
  cin.getline(n2, SIZE_2);
  number2 = atof(n2);

  cout << c << " " << setprecision(2) << fixed << number1 * number2 << endl;


  return 0;
}
