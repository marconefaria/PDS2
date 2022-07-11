#include "Stack.h"

struct Node {
  unsigned elem;
  Node* next;
};

Stack::Stack() {
  _top = nullptr;
}

void Stack::push(unsigned elem) {
    Node *novo;
    novo->elem = elem;
    novo->next = _top;
    _count++;
}

void Stack::pop() {
    Node *current = _top->next;
    _top = current;
}

unsigned Stack::top() const {
  return _top->elem;
}

unsigned Stack::count() const {
  return _count;  // TODO.
}