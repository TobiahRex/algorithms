#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

void getFileName(string &f);
void readFile(string &f);
vector<string> splice(vector<string> &arr, int start, int stop);

int main() {
  string fileName;
  getFileName(fileName);
  readFile(fileName);

  return 0;
}

vector<string> splice(vector<string> &arr, int start, int stop) {
  vector<string>::const_iterator right = arr.begin() + stop;
  vector<string>::const_iterator left;

  switch(start) {
    case 0: left = arr.begin(); break;
    default: left = arr.begin() + start;
  }

  vector<string> newArr(left, right);
  return newArr;
}

void getFileName(string &f) {
  bool getFileName{true};
  while(getFileName) {
    cout << "\nEnter file name: ";
    cin >> f;

    if (!f || cin.bad() || cin.fail()) {
      cerr << "\nThat is not a valid file name. Please try again.\n";
      cin.clear();
      cin.ignore();
    } else {
      getFileName = false;
    }
  }
}

void readFile(string &f) {
  ifstream infile("/Users/BICKLEY/code/cs/comsc165/6A-3/" + f);
  vector<string> lines;
  string line, eofile("That is the whole file.");
  int linesCount{};

  bool readFile{true};
  while(readFile) {
    if(getline(infile, line)) {
      linesCount++;
      lines.push_back(line);
    } else {
      int start = lines.size() - 10;
      int stop = lines.size();
      vector<string> last10 = splice(lines, start, stop);
      for (auto line : last10) cout << line << endl;
      if (linesCount < 10) cout << endl << eofile << endl;

      readFile = false;
    }
  }
}
