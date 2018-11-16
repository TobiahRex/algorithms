#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>

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
    LinkedList(const LinkedList &oldList);
    ~ LinkedList() {
      delete head;
    }

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
    void display() const {
      ListNode *nextNode;

      if(head) {
        int nodeCount{0};
        std::cout << "Head: " << head->data << std::endl;
        nextNode = head;
        while(nextNode->next) {
          nextNode = nextNode->next;
          ++nodeCount;
          std::cout << "Node #" << nodeCount << " : " << nextNode->data << std::endl;
        }
      } else {
        std::cout << "Head: " << head->data << std::endl;
      }
      std::cout << "\t--- END of List --- " << std::endl;
    };
    void reverseList();
};
#endif
