#include <iostream>
using namespace std;

class Queue {
private:
  struct QueueNode {
    float data;
    struct QueueNode* next;
  };
  QueueNode *front;
  QueueNode *rear;
  int numItems;
public:
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
  void dequeue(float &f) {
    QueueNode *temp = nullptr;
    if (isEmpty()) {
      cout << "Queue is empty." << endl;
    } else {
      f = front->data;
      temp = front;
      front = front->next;
      delete temp;
      numItems -= 1;
    }
  }

  bool isEmpty() const {
    bool status = false;
    if (numItems == 0) status = true;
    return status;
  }
  void clear() {
    float temp;
    while(!isEmpty()) {
      dequeue(temp);
      cout << temp << endl;
    };
  }
};

int main() {
  Queue numsQueue;
  for (int i = 1; i <= 5; i++) {
    numsQueue.enqueue(i * 1.1);
  }
  while(!numsQueue.isEmpty()) {
    float temp;
    numsQueue.dequeue(temp);
    cout << temp << endl;
  }
  return 0;
}
