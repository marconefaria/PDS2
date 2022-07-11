#include "List.hpp"

#include <string>
#include <iostream>

List::List(){
    this->setHead(nullptr);
    this->_size = 0;
}

List::~List(){
    if(!this->isEmpty()){
        while(!this->isEmpty()){
            Node *current = this->getHead();
            this->setHead(this->getHead()->getNext());
            delete current;
        }
    }
}

Node* List::getHead(){
    return this->head;
}

void List::setHead(Node *value){
    this->head = value;
}

void List::insert(int value){
    /* This function inserts an element in the head of the list.*/
    Node *node = new Node(value, this->getHead());
	
    if(this->isEmpty()){
        node->setNext(nullptr);
        this->setHead(node);
    }else{
        node->setNext(this->getHead());
        this->setHead(node);
    }

    this->_size += 1;
    //delete node;
    return;
} 

void List::print(){
	Node *prox = this->getHead();
	if (_size > 0){
		while(prox != nullptr){
			std::cout << prox->getData() << " ";
			prox = prox->getNext();
		}
		std::cout<<std::endl;
	}
	else{
	    std::cout << "-" << std::endl;
		return;
	}
}

int List::remove(){
    /** This function removes the head of the list, and returns the
    data stored there.
    returns an integer that was stored in the head of the list.*/
    if(this->isEmpty()){
        return 0;
    }else{
        Node *current = this->getHead();
        int first = this->getHead()->getData();

        //head = head->getNext();
        this->setHead(this->getHead()->getNext());
        this->_size -= 1;

        return first;
    }
}

int List::isEmpty(){
    /** This method indicates when the list is empty.
    returns true if the list is empty, and false otherwise.*/
    if(this->getHead() == nullptr){
        return 1;
    }else{
        return 0;
    }
}

unsigned int List::size() const{
    /** Informs the number of elements in the list.
    returns an integer n, where n is the number of nodes in the list.*/
   return this->_size;
}
        
int List::middle() const{
    /** Returns the element in the middle of the list.
    If the list has 2*n or 2*n+1 elements, then the middle element is
    the element at index n, assuming that the first index is zero.
    @returns the middle element of the list.*/
    Node *slow_ptr = this->head;
    Node *fast_ptr = this->head;
 
    if(this->head != nullptr){
        while ((fast_ptr != nullptr) && (fast_ptr->getNext() != nullptr)){
            fast_ptr = fast_ptr->getNext()->getNext();
            slow_ptr = slow_ptr->getNext();
        }
        //delete slow_ptr;
        //delete fast_ptr;

        return slow_ptr->getData();
    }else{
        return 0;
    }
}
        
int List::last() const{
    /** Returns the last element in the linked list.
    @returns the integer stored in the last element of the list.*/

    Node *prox = this->head;
    int last_element = 0;

    while(prox != nullptr){
        last_element = prox->getData();
        prox = prox->getNext();
    }

    return last_element;
}
        
void List::rotate(){
    /** This method moves the head of the list to its last position.
    In other words, rotate() + last() == head.*/
    Node *last = this->getHead();
    Node *newStart = this->getHead()->getNext();
    for (int i=0; i < size()-1; i++){
        last = last->getNext();
    }
    last->setNext(this->getHead());
    last->getNext()->setNext(nullptr);
    this->setHead(newStart);
}