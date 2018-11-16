#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class LinkedList {
  private:
    struct ListNode {
      double value;
      struct ListNode *next;
    };

    ListNode *head;
  public:
    LinkedList() {
      head = nullptr;
    }
    ~LinkedList();
    LinkedList(const LinkedList &oldList);

    void appendNode(double data) {
      ListNode *newNode;
      ListNode *nextNode;

      newNode = new ListNode;
      newNode->value = data;
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
    void insertNode(double value, double location);
    void deleteNode(double value);
    void display() const;
    void reverseList();
};
#endif
