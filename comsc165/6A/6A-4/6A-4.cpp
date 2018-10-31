#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

void readJoke(ifstream &);
void readPunchline(ifstream &);

int main() {
  ifstream jokeFile("joke.txt");
  ifstream punchlineFile("punchline.txt");

  readJoke(jokeFile);
  readPunchline(punchlineFile);

  cin.clear();
  readFile(fileName);

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
  file.seekg(-1L, ios::end);
  char c;
  file.get(c);
  cout << "\n" << c << endl;
}
