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
  string eofile("That is the whole file.");

  if (!infile) cout << "Could not open file";

  char c;
  long int location = -2;
  int lineCount{0};
  bool findTenthLine{true}, shortFile{false};
  string line("");

  while (findTenthLine) {
    if (!getline(infile, line)) {
      findTenthLine = false;
      if (lineCount < 10) shortFile = true;
    }
    infile.seekg(location, ios::end);
    infile.get(c);

    if (c == '\n') {
      lineCount += 1;
      location -= 1;
    } else {
      location -= 1;
    }

    if (lineCount == 10) {
      findTenthLine = false;
    }
  }
  infile.clear();

  if (shortFile) infile.seekg(0L, ios::beg);

  bool readFile{true};
  while(readFile) {
    if(getline(infile, line)) {
      cout << line << endl;
    } else {
      readFile = false;
    }
  }

  if (lineCount < 10) {
    cout << endl << eofile << endl;
  }
}
