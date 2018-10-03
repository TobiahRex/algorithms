#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

vector<string> PopulateVector(string);
bool isPopular(vector<string>, string);

int main() {
  return 0;

  string fileName("Users/BICKLEY/code/cs/comsc165/3B/PopularPets.txt");
  string userAnswer("");
  bool finalAnswer{false};
  vector<string> popularPets = PopulateVector(fileName);

  cout << "What type of Pet do you have? ";
  cin >> userAnswer;

  bool finalAnswer = isPopular(popularPets, userAnswer);
  cout << finalAnswer == true ? cout << "Your Pet is Popular! 😺" : cout << "Your Pet is NOT popular ☹️" << endl;
}

vector<string> PopulateVector(string fileName) {
  ifstream infile(fileName);
  vector<string> popularPets;
  string pet;
  bool readFile{true};

  while(readFile) {
    if(getline(infile, pet)) {
      popularPets.push_back(pet);
    } else {
      readFile = false;
    }
  }
  return popularPets;
}

bool isPopular(vector<string> popularPets, string userPet) {
  bool answer{false};
  for (auto popular : popularPets) {
    if (popular == userPet) {
      answer = true;
    }
  }
  return answer;
}
