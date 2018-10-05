#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

vector<string> PopulateVector(string);
bool isPopular(vector<string>, string);

int main() {
  string fileName("/Users/BICKLEY/code/cs/c-plus-plus/comsc165/3B/PopularPets.txt");
  string userAnswer("");
  vector<string> popularPets = PopulateVector(fileName);

  cout << "What type of Pet do you have? ";
  getline(cin, userAnswer);

  if (isPopular(popularPets, userAnswer)) {
    cout << "Your Pet is Popular!" << endl;
  } else {
    cout << "Your Pet is NOT popular" << endl;
  }

  return 0;
}

vector<string> PopulateVector(string file) {
  ifstream infile(file);
  if (!infile) {
    cout << "ERROR: Could not open file." << endl;
    exit(1);
  }

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
    if (popular.compare(userPet) == 0) {
      answer = true;
    }
  }
  return answer;
}
