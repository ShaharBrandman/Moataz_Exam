#ifndef NODE_H
#define NODE_H

class Node {
   public:
       int value;
       Node* left;
       Node* right;


       Node(int value) : value(value), left(nullptr), right(nullptr) {}


       Node(int value, Node* left) : value(value), left(left), right(nullptr) {}


       Node(int value, Node* left, Node* right) : value(value), left(left), right(right) {}


       ~Node() {
           delete left;
           delete right;
       }
};

#endif