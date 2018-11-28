#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>

class LinkedList {
  private:
    struct ListNode {
      int data;
      struct ListNode *next;
    };

    ListNode *head;
  public:
    LinkedList() {
      head = nullptr;
    }
    LinkedList(const LinkedList &oldList) {
      head = oldList.head;
    }
    ~ LinkedList() {
      std::cout << "Removing List" << std::endl;
      delete head;
    }

    void appendNode(int d) {
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
    void insertNode(int num) {
      ListNode *newNode;
      ListNode *nodePtr;
      ListNode *prevNode = nullptr;

      newNode = new ListNode;
      newNode->data = num;

      if (!head) {
        head = newNode;
        newNode->next = nullptr;
      } else {
        nodePtr = head;
        prevNode = nullptr;

        while(nodePtr != nullptr && nodePtr->data < num) {
          prevNode = nodePtr;
          nodePtr = nodePtr->next;
        }

        if (prevNode == nullptr) {
          head = newNode;
          newNode->next = nodePtr;
        } else {
          prevNode->next = newNode;
          newNode->next = nodePtr;
        }
      }
    }
    void deleteNode(int d) {
      ListNode *nodePtr;

      if(head->data == d) {
        head = head->next;
      } else {
        nodePtr = head;
        while(nodePtr->next && nodePtr->next->data != d)
          nodePtr = nodePtr->next;

        // ASSUME: the next node is the one to delete...
        // Check if we'er at the end of the list?
        if (nodePtr->next == nullptr) {
          // YES - simply delete the node.
          delete nodePtr;
        } else {
          // is there an item after the one we intend to delete?
          if (nodePtr->next->next) {
            // YES - assign to that node.
            nodePtr->next = nodePtr->next->next;
          } else {
            // NO - then just delete from memory
            delete nodePtr->next;
            //& re-assign next to an empty address.
            nodePtr->next = nullptr;
          }
        }
      }
    }
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
    void reverseList() {
      ListNode *prevNode = nullptr; // is prior node
      ListNode *currentNode = head; // looks behind.
      ListNode *nextNode = nullptr; // looks forward

      while(currentNode != nullptr) {
        nextNode = currentNode->next;
        currentNode->next = prevNode;
        prevNode = currentNode;
        currentNode = nextNode;
      }
      head = prevNode;
    }
};
#endif
