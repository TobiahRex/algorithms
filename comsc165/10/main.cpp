#include <iostream>
using namespace std;

class PersonData
{
private:
  string lastName;
  string firstName;
  string address;
  string city;
  string state;
  string zip;
  string phone;

public:
  PersonData()   //default constructor
  {
    lastName = "";
    firstName = "";
    address = "";
    city = "";
    state = "";
    zip = "";
    phone = "";
  }
  PersonData(string lastName,string firstName,string address,string city,string state,string zip,string phone)
  {
    this->lastName = lastName;
    this->firstName = firstName;
    this->address = address;
    this->city = city;
    this->state = state;
    this->zip = zip;
    this->phone = phone;
  }
  //accessor and mutator functions

  void setLastName(string lastName)
  {
    this->lastName = lastName;
  }
  string getLastName()
  {
    return lastName;
  }
  void setFirstName(string firstName)
  {
    this->firstName = firstName;
  }
  string getFirstName()
  {
    return firstName;
  }
  void setAddress(string address)
  {
    this->address = address;
  }
  string getAddress()
  {
    return address;
  }
  void setCity(string city)
  {
    this->city = city;
  }
  string getCity()
  {
    return city;
  }
  void setState(string state)
  {
    this->state = state;
  }
  string getState()
  {
    return state;
  }
  void setZip(string zip)
  {
    this->zip = zip;
  }
  string getZip()
  {
    return zip;
  }
  void setPhone(string phone)
  {
    this->phone = phone;
  }
  string getPhone()
  {
    return phone;
  }

};
class CustomerData:public PersonData
{

private:
  int customerNumber;
  bool mailingList;

public:
  CustomerData()    //default constructor
  {
    customerNumber = 0;
    mailingList = false;
  }
  CustomerData(int customerNumber,bool mailingList) //parameterized constructor
  {
    this->customerNumber = customerNumber;
    this->mailingList = mailingList;
  }
  void setCustomerNumber(int customerNumber)   //set and get methods
  {
    this->customerNumber = customerNumber;
  }
  int getCustomerNumber()
  {
    return customerNumber;
  }
  void setMailingList(bool mailingList)
  {
    this->mailingList = mailingList;
  }
  bool getMailingList()
  {
    return mailingList;
  }

};

void displayCustomer(CustomerData &c) {
  cout<<"Name of the customer : "<<c.getFirstName()<<" "<<c.getLastName()<<endl;
  cout<<"Address : "<<c.getAddress()<<endl;
  cout<<"City : "<<c.getCity()<<endl;
  cout<<"State : "<<c.getState()<<endl;
  cout<<"Zip Code : "<<c.getZip()<<endl;
  cout<<"Customer Number : "<<c.getCustomerNumber()<<endl;
  string result = c.getMailingList() ? "true" : "false";
  cout<<"On mailing list : "<< result << endl;
}

int main()
{
  CustomerData c;

  c.setLastName("Smith");
  c.setFirstName("John");
  c.setAddress("123 Main Street");
  c.setCity("Smithville");
  c.setState("NC");
  c.setZip("99999");
  c.setCustomerNumber(12345);
  c.setMailingList(true);
  displayCustomer(c);

  CustomerData c2;
  string userInput;
  cout << "Enter First Name: ";
  getline(cin, userInput);
  c2.setFirstName(userInput);
  cout << "Enter Last Name: ";
  getline(cin, userInput);
  c2.setLastName(userInput);
  cout << "Enter Address: ";
  getline(cin, userInput);
  c2.setAddress(userInput);
  cout << "Enter City: ";
  getline(cin, userInput);
  c2.setCity(userInput);
  cout << "Enter State: ";
  getline(cin, userInput);
  c2.setState(userInput);
  cout << "Enter Zip: ";
  getline(cin, userInput);
  c2.setZip(userInput);

  int input;
  cout << "Enter Customer Number: ";
  cin >> input;
  c2.setCustomerNumber(input);
  bool display;
  cout << "Add to mailing list? ";
  cin >> display;
  c2.setMailingList(display);
  displayCustomer(c2);

  return 0;
}
