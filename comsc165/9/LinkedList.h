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

    void appendNode(double value);
    void insertNode(double value, double location);
    void deleteNode(double value);
    void display();
    void reverseList();
};
#endif
