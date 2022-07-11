#include <iostream>
#include "List.hpp"

int main(){
    List *L = new List();
    int n, k, value=0, index=0;

    std::cin >> n >> k;
    
    for(int i = 0; i <= n; i++){
        L->insert(i);
    }

    L->print();
    std::cout << L->_size << std::endl;

    for(int i = 0; i < k; i++){
        if(n < k){
            break;
        }
        L->remove(L->_head->_value);
        L->_head->_next;
    }

    L->print();
    std::cout << L->_size << std::endl;


    Node *head = L->_head;

    while(head != nullptr){
        value = head->_value;
        //index = L->indexOf(value); 
        if(value%2 == 0){
            L->remove(value);
        }
        head = head->_next;
    }

    L->remove(0); 

    L->print();
    std::cout << L->_size << std::endl;

    delete L;
	return 0;
}