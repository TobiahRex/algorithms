#ifndef STACK_H
#define STACK_H

class Stack
{
  Stack( ); // may have a defaulted parameter
  void push(const V&);
  V& peek( );
  void pop( );
  void isFull();
  int size( ) const;
  bool empty( ) const;
  void clear( );
};

#endif;
{
  StackNode *nodePtr = nullptr, *nextNode = nullptr;   
   nodePtr = top;
  while (nodePtr != nullptr)   {
    nextNode = nodePtr->next;
    delete nodePtr;
    nodePtr = nextNode;
  }
}
