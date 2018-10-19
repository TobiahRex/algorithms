#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void ModifyString(char *, char *, char *, int);
void FindSubStr(char *);


int main() {
  const int SIZE{25};
  char string1[25], string2[25];
  cout << "Enter value for String 1: ";
  cin.getline(string1, SIZE);
  cout << "Enter value for String 2: ";
  cin.getline(string2, SIZE);

  const int NEW_SIZE = strlen(string1) + strlen(string2) + 1;
  char newString[NEW_SIZE];

  cout << "String 1: " << string1 << endl << "String 2: " << string2 << endl;
  ModifyString(newString, string1, string2, NEW_SIZE);
  FindSubStr(newString);

  return 0;
}

void ModifyString(char *newString, char *string1, char *string2, int SIZE) {
  newString[0] = '\0';
  strcat(newString, string1);
  strcat(newString, string2);

  for (int i = 0; i < SIZE; i++) {
    newString[i] = tolower(newString[i]);
  }
  cout << "Modified String: " << newString << endl;
}

void FindSubStr(char *string) {
  char substr[4] = {'t', 'h', 'e', '\0'};
  if (strstr(string, substr)) {
    cout << "Found the substring \"the\" in the strings" << endl;
  } else {
    cout << "Did not find substring \"the\"" << endl;
  }
}
