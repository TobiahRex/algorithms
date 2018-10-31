#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

void readJoke(ifstream &);
void readPunchline(ifstream &);

int main() {
  ifstream jokeFile("joke.txt");
  ifstream punchlineFile("punchline.txt");

  if (!jokeFile || !punchlineFile) cout << "Could not open file" << endl;

  readJoke(jokeFile);
  readPunchline(punchlineFile);

  return 0;
}

void readJoke(ifstream &file) {
  string line("");

  bool readFile{true};
  while(readFile) {
    if(getline(file, line)) {
      cout << line << endl;
    } else {
      readFile = false;
    }
  }
}

void readPunchline(ifstream &file) {
  bool finished{false};
  long int location = -2;
  char c;

  while(!finished) {
    file.seekg(location, ios::end);
    file.get(c);
    if (c == '\n') {
      finished = true;
    } else {
      location -= 1;
    }
  }
  string lastLine("");
  getline(file, lastLine);
  cout << "\n" << lastLine << endl;
}
