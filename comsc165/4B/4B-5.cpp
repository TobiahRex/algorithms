#include <iostream>
#include <string>
using namespace std;

int main() {
  string favSnack(""), favFood(""), favDrink(""), combo("");

  cout << "What's your favorite Snack? ";
  getline(cin, favSnack);

  cout << "What's your favorite Food? ";
  getline(cin, favFood);

  cout << "What's your favorite Drink? ";
  getline(cin, favDrink);

  cout << "\nYour Favorite..." << endl
  << "Snack: \t\t" << favSnack << endl
  << "Food: \t\t" << favFood << endl
  << "Drink: \t\t" << favDrink << endl;

  combo.append(favSnack);
  combo.append(favFood);
  combo.append(favDrink);

  cout << "\nFinal String: '" << combo << "'" << endl;

  return 0;
}
