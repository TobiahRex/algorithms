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

  cin.clear();
  readFile(fileName);

  return 0;
}
