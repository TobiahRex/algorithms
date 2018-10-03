#include <iostream>
#include <vector>
#include <string>
using namespace std;


int itValue() {
  vector<string> names = {"toby", "bob"};
  vector<string>::iterator it;

  for (it = names.begin(); it != names.end(); it++) {
    cout << it << endl;
  }

  return 1;
}

int main() {
  vector<int> n = {1};

  // cout << "x: " <<  n[1] << endl;
  itValue();

  return 0;
}
