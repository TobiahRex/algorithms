#include <iostream>
#include <vector>
using namespace std;

void GetInput(char *);
void CountVowels(string &);

int main() {
  const int SIZE{50};
  char inputStr[SIZE];
  GetInput(inputStr);
  CountVowels(inputStr);

  return 0;
}
void GetInput(char *input) {
  cin.clear();
  cin.getline(input, 50);
}

void CountVowels(char *input) {
  int i{0}, total{0};
  vector<int> vowel_count = {0, 0, 0, 0, 0}; // 0: a, 1: e, 2: i, 3: o, 4: u,
  while(input[i] != '\0') {
    switch(input[i]) {
      case 'a': {
        vowel_count[0] += 1;
        total += 1
      }; break;
      case 'e': {
        vowel_count[1] += 1;
        total += 1
      }; break;
      case 'i': {
        vowel_count[2] += 1;
        total += 1;
      }; break;
      case 'o': {
        vowel_count[3] += 1;
        total += 1;
      }; break;
      case 'u': {
        vowel_count[4] += 1;
        total += 1;
      }; break;
      default: break;
    }
  }

  cout << "Input String: " << input
  << "Vowel Results: " << endl
  << "a: \t\t" << vowel_count[0] << endl
  << "e: \t\t" << vowel_count[1] << endl
  << "i: \t\t" << vowel_count[2] << endl
  << "o: \t\t" << vowel_count[3] << endl
  << "u: \t\t" << vowel_count[4] << endl
  << "Total Vowels: " << total << endl;
}
