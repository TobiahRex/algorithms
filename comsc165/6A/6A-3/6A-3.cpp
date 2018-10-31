#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

void readFile(string &f);

int main() {
  string fileName("");
  cout << "\nEnter file name: ";
  getline(cin, fileName);
  cin.clear();
  readFile(fileName);

  return 0;
}

void readFile(string &f) {
  string fileName = "/Users/BICKLEY/code/cs/c-plus-plus/comsc165/6A/6A-3/" + f;
  ifstream infile(fileName);
  vector<string> lines;
  string line(""), eofile("That is the whole file.");

  if (!infile) cout << "Could not open file";

  int linesCount{};

  bool readFile{true};
  while(readFile) {
    if(getline(infile, line)) {
      linesCount++;
      lines.push_back(line);

    } else {
      for (auto x : lines) cout << x << endl;
      if (linesCount < 10) cout << endl << eofile << endl;
      readFile = false;
    }
  }
}
