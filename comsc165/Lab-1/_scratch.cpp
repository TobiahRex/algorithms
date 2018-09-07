#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<string> prompts = {
    "string a",
    "string b",
  };

  for(auto p : prompts) {
    cout << p << endl;
  }

  return 0;
}
