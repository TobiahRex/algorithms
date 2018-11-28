#include <iostream>
#include "LinkedList.h"
using namespace std;

int main() {
  LinkedList firstList;
  firstList.appendNode(2);
  firstList.appendNode(4);
  firstList.appendNode(6);
  firstList.display();

  LinkedList secondList = firstList;
  secondList.display();

  // the second parameter for "insertNode" was an extra feature I added to choose which index to insert the node at in the list.
  firstList.insertNode(5);
  firstList.display();
  firstList.deleteNode(6);
  firstList.display();

  cout << "Second List: " << endl;
  secondList.display();
  secondList.reverseList();
  cout << "Second List REVERSED: " << endl;
  secondList.display();

  return 0;
}
