#include <iostream>
#include "LinkedList.h"
using namespace std;

int main() {
  LinkedList firstList;
  firstList.appendNode(2);
  firstList.appendNode(4);
  firstList.appendNode(6);

  // LinkedList secondList = firstList;
  //
  firstList.insertNode(5, 0);
  firstList.display();
  firstList.deleteNode(2);
  firstList.display();
  //
  // secondList.display();
  // secondList.reverseList();
  // secondList.display();

  return 0;
}