#include <iostream>

#include "Queue.h"

void depthFirstSearch(Queue &q) {
    if (q == nullptr) {
        std::cerr << "Queue is null" << std::endl;
        return;
    }

    while (!q.isEmpty()) {
        Node* head = q.popHead();

        if ()

        if (head->left != nullptr) {
            cout << head->value;
        }
        else if (head->right != nullptr) {

        }
    }
}

int main() {
    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);
    Node* node4 = new Node(4);
    Node* node5 = new Node(5);

    node1->left = node2;
    node1->right = node3;
    node2->left = node4;
    node2->right = node5;

    std::cout << "Depth-First Search: ";
    depthFirstSearch(node1);

    // Cleanup
    delete node1;

    return 0;
}