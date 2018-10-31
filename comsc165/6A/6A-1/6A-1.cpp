#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;


struct AddressBook {
  string firstName;
  string lastName;
  string streetAddress;
  string city;
  string state;
  long int zipCode;
};
// Helper Functions
bool verifyStringLength(string, int, int &);
bool askUserForAddress();
void printError(string);

// Program Functions
void getSingleAddress(AddressBook &);
void writeAddressesToFile(vector<AddressBook>);
vector<AddressBook> readAddressesFromFile(string);
void writeToTextFile(vector<AddressBook>, string);

// main
int main() {
  vector<AddressBook> addresses;
  int addressCount{0};

  while(addressCount++ < 20 && askUserForAddress()) {
    AddressBook fresh;
    getSingleAddress(fresh);
    addresses.push_back(fresh);
  }
  writeAddressesToFile(addresses);
  vector<AddressBook> records = readAddressesFromFile("6A-output.bin");
  writeToTextFile(records, "6A-output.text");

  return 0;
}

bool askUserForAddress() {
  cout << "\nDo you want to enter a new address? (Y/N): ";
  char answer;
  cin >> answer;
  if (answer == 'Y' || answer == 'y') {
    return true;
  } else {
    return false;
  }
}

void getSingleAddress(AddressBook &newAddress) {
  int inputCount{0};

  string temp_firstName("");
  while(!verifyStringLength(temp_firstName, 15, inputCount)) {
    cout << "Enter First Name (max 15 characters): ";
    cin >> temp_firstName;
  }
  newAddress.firstName = temp_firstName;

  inputCount = 0;
  string temp_lastName("");
  while(!verifyStringLength(temp_lastName, 15, inputCount)) {
    cout << "Enter Last Name (max 15 characters): ";
    cin >> temp_lastName;
  }
  newAddress.lastName = temp_lastName;

  inputCount = 0;
  string temp_streetAddress("");
  while(!verifyStringLength(temp_streetAddress, 30, inputCount)) {
    cout << "Enter Street Address (max 30 characters): ";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, temp_streetAddress);
  }
  newAddress.streetAddress = temp_streetAddress;

  inputCount = 0;
  string temp_city("");
  while(!verifyStringLength(temp_city, 20, inputCount)) {
    cout << "Enter City (max 30 characters): ";
    cin.clear();
    getline(cin, temp_city);
  }
  newAddress.city = temp_city;

  inputCount = 0;
  string temp_state("");
  while(!verifyStringLength(temp_state, 10, inputCount)) {
    cout << "Enter State (max 30 characters): ";
    cin.clear();
    getline(cin, temp_state);
  }
  newAddress.state = temp_state;

  cout << "Enter Zip Code: ";
  cin.clear();
  cin >> newAddress.zipCode;
  cin.clear();
}

bool verifyStringLength(string value, int length, int &request) {
  if (request == 0) {
    request += 1;
    return false;
  } else {
    request += 1;
    int vLength = value.length();
    if (vLength > length) {
      printError("ERROR! Invalid input. Please try again.\n");
      return false;
    } else {
      return true;
    }
  }
}

void printError(string message) {
  cout << endl << message;
}

void writeAddressesToFile(vector<AddressBook> addresses) {
  fstream dataFile;
  dataFile.open("6A-output.bin", ios::out | ios::binary);
  for (AddressBook address : addresses) {
    dataFile.write((char *)&address, sizeof(address));
  }
  dataFile.close();
}

vector<AddressBook> readAddressesFromFile(string fileName) {
  fstream binFile;
  vector<AddressBook> records{};

  binFile.open(fileName, ios::in|ios::binary);
  bool getRecord{true};
  while(getRecord){
    AddressBook record;
    if (binFile.read((char *)(&record), sizeof(record))) {
      records.push_back(record);
    } else {
      getRecord = false;
    }
  }
  binFile.clear();
  binFile.close();

  return records;
}

void writeToTextFile(vector<AddressBook> records, string fileName) {
  fstream dataFile;
  dataFile.open(fileName, ios::out);
  for (AddressBook record : records) {
    dataFile << "First Name: " << record.firstName << endl;
    dataFile << "Last Name: " << record.lastName << endl;
    dataFile << "Street Address: " << record.streetAddress << endl;
    dataFile << "City: " << record.city << endl;
    dataFile << "State: " << record.state << endl;
    dataFile << "Zip Code: " << record.zipCode << endl << endl;
  }
}
