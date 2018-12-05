#include <iostream>
#include <string>
using namespace std;

class Stack {
private:
  struct StackNode {
    string data;
    struct StackNode* next;
  };
  StackNode* top;
public:
  Stack() {
    top = nullptr;
  }
  ~Stack() {
    StackNode *nodePtr = nullptr,
      *nextNode = nullptr;

    nodePtr = top;
    while(nodePtr != nullptr) {
      nextNode = nodePtr->next;
      delete nodePtr;
      nodePtr = nextNode;
    }
  }

  void push(string s) {
    StackNode *newNode = nullptr;

    newNode = new StackNode;
    newNode->data = s;

    if (isEmpty()) {
      top = newNode;
      newNode->next = nullptr;
    } else {
      newNode->next = top;
      top = newNode;
    }
  }
  string pop() {
    StackNode *temp = nullptr;
    string poppedString("");
    if (isEmpty()) {
      cout << "The stack is empty" << endl;
    } else {
      poppedString = top->data;
      temp = top->next;
      delete top;
      top = temp;
    }
    return poppedString;
  }
  bool isEmpty() {
    bool status{false};
    if (!top) status = true;
    return status;
  }
};


int main() {
  Stack strings;
  strings.push("one");
  strings.push("two");
  strings.push("three");
  cout << strings.pop() << endl;
  cout << strings.pop() << endl;
  cout << strings.pop() << endl;
  cout << strings.pop() << endl;

  return 0;
}
