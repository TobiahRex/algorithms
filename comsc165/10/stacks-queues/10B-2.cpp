#include <iostream>
using namespace std;

class Queue {
private:
  struct QueueNode {
    float data;
    struct QueueNode* next;
  }
  QueueNode *front;
  QueueNode *rear;
  int numItems;

  Queue() {
    front = nullptr;
    rear = nullptr;
    numItems = 0;
  }
  ~Queue() {
    clear();
  }
  void enqueue(float f) {
    QueueNode *newNode = nullptr;
    newNode = new QueueNode;
    newNode->data = f;
    newNode->next = nullptr;

    if (isEmpty()) {
      front = newNode;
      rear = newNode;
    } else {
      rear->next = newNode;
      rear = newNode;
    }
    numItems += 1;
  }
  float dequeue() {
    QueueNode *temp = nullptr;
    float returnData;
    if (isEmpty()) {
      cout << "Queue is empty." << endl;
    } else {
      returnData = front->data;
      temp = front;
      front = front->next;
      delete temp;
      numItems -= 1;
    }

    return returnData;
  }
  bool isEmpty() const {
    bool status = false;
    if (numItems == 0) status = true;
    return status;
  }
  void clear() {
    while(!isEmpty()) dequeue();
  }
}

int main() {
  Queue numsQueue;
  for (let i = 1; i <= 5; i++) {
    numsQueue.enqueue(i * 1.1);
  }
  while(!numsQueue.isEmpty()) {
    cout << numsQueue.dequeue() << endl;
  }
  return 0;
}
