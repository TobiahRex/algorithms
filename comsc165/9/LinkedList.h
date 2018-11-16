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
    void insertNode(double d, double location) {
      ListNode *newNode;
      ListNode *nodePtr;
      newNode->data = d;
      newNode->next = nullptr;

      int i{0};
      if (i < location) {
        nodePtr = head;
        //                insertHere (2)
        // nodePtr (1) -> nodePtr(1).next

        // newNode.next = nodePtr.next;
        // nodePtr.next = newNode
        for (int i = 0; i < location; i++) {
          nodePtr = nodePtr->next;
        }
        newNode->next = nodePtr->next;
        nodePtr->next = newNode;
      } else if(location == 0) {
        newNode->next = head->next;
        head->next = newNode;
      }
    }
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
