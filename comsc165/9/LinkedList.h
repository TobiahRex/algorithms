#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class LinkedList {
  private:
    struct ListNode {
      double data;
      struct ListNode *next;
    };

    ListNode *head;
  public:
    LinkedList() {
      head = nullptr;
    }
    ~LinkedList();
    LinkedList(const LinkedList &oldList);

    void appendNode(double d) {
      ListNode *newNode;
      ListNode *nextNode;

      newNode = new ListNode;
      newNode->data = d;
      newNode->next = nullptr;

      if (head) {
        nextNode = head;
        while(nextNode->next)
          nextNode = nextNode->next;

        nextNode->next = newNode;
      } else {
        head = newNode;
      }
    }
    void insertNode(double data, double location);
    void deleteNode(double data);
    int display() const {
      ListNode *nextNode;

      if (head) {
        int nodeCount{0};
        cout << "Head: " << head.data << endl;
        nextNode = head->next;
        while(nextNode->next) {
          ++nodeCount;
          cout << "Node #" << nodeCount << " : " << nextNode.data << endl;
          nextNode = nextNode->next;
        }
        return 0;
      }
      cout << head->data;
      return 0;
    };
    void reverseList();
};
#endif
