#include <iostream>
#include "LinkedList.h"
using namespace std;

int main() {
  LinkedList firstList;
  firstList.appendNode(2);
  firstList.appendNode(4);
  firstList.appendNode(6);

  LinkedList secondList = firstList;

  firstList.insertNode(5, 0);
  firstList.display();
  firstList.deleteNode(2);
  firstList.display();

  cout << "Second List: " << endl;
  secondList.display();
  secondList.reverseList();
  cout << "Second List REVERSED: " << endl;
  secondList.display();

  return 0;
}
