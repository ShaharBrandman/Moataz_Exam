#include <iostream>

#include "Node.h"

class Queue {
    private:
        Node* head;
        Node* tail;

    public:
        Queue() : head(nullptr), tail(nullptr) {}

        void insert(Node *newNode) {
            if (tail == nullptr) {
                head = tail = newNode;
            }
            else {
                tail->right = newNode;
                newNode->left = tail;
                tail = newNode;
            }
        }

        Node* popHead() {
            if (isEmpty()) {
                std::cerr << "Queue is empty" << std::endl;
                return nullptr;
            }

            Node* removedNode = head;

            if (head == tail) {
                head = tail = nullptr;
            }
            else {
                head = head->right;
                head->left = nullptr;
            }

            return removedNode;
        }

        Node* popTail() {
            if (tail == nullptr) {
                std::cerr << "Queue is empty" << std::endl;
                return nullptr;
            }

            Node* removedNode = tail;

            if (head == tail) {
                head = tail = nullptr;
            }
            else {
                tail = tail->left;
                tail->right = nullptr;
            }

            return removedNode;
        }

        bool isEmpty() {
            return this->head == nullptr;
        }

        ~Queue() {
            Node* current = head;
            while(current != nullptr) {
                Node* next = current->right;
                delete current;
                current = next;
            }
        }
};