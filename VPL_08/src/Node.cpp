#include "Node.hpp"
#include <string>
#include <iostream>

Node::Node(int data, Node* next){
    this->_data = data;
    this->_next = next;
}

Node::~Node(){
    this->_data = 0;
    this->_next = nullptr;
}

void Node::setData(int data){
    this->_data = data;
}

void Node::setNext(Node *next){
    this->_next = next;
}

int Node::getData() const{
    return this->_data;
}

Node* Node::getNext() const{
    return this->_next;
}