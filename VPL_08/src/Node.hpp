#include <string>

 class Node{
    private:
        int _data;
        Node *_next;
    public:
        Node(int data, Node* next);
        ~Node();
        void setData(int data);
        void setNext(Node *next);
        
        int getData() const;
        /** Returns the data stored in the node.
         @returns the integer stored in the node. */

        Node* getNext() const;
        /** Returns the next node.*/
};