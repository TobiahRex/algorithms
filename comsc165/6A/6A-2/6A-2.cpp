#include <iostream>
#include <fstream>
using namespace std;

int main() {
  fstream dataFile;
  dataFile.open("proverb.txt", ios::in);

  if (dataFile) {
    long int location;
    location = dataFile.tellg();
    cout << "\nThe read position is currently at byte: " << location << endl;
    bool readFile{true};
    while(readFile) {
      cout << "\nEnter an offset from the current position: ";
      cin >> location;
      if (dataFile.eof()) dataFile.clear();
      dataFile.seekg(location, ios::cur);


      location = dataFile.tellg();
      cout << "Current read location is " << location << endl;

      char c;
      dataFile.get(c);
      cout << "Character read is " << '\'' << c << '\'' << endl;

      cout << "If you would like to enter another offest press Y/y: ";
      char answer;
      cin >> answer;
      if (answer != 'Y' && answer != 'y') readFile = false;
      cin.clear();
    }
  } else {
    cout << "Could not open file.";
    return 0;
  }

  return 0;
}
