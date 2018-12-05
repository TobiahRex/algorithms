#ifndef QUEUE_H
#define QUEUE_H

class Queue
{
  Queue( ); // may have a defaulted parameter
  void push(const V&);
  V& front( ); // return a mutable reference to the oldest node
  V& back( ); // return a mutable reference to the newest node
  void pop( ); // remove the oldest node
  int size( ) const;
  bool empty( ) const;
  void clear( );
};
#endif
