#include <iostream>
#include <queue>

#include "Node.h"

void breadthFirstSearch(Node* root) {
        if (root == nullptr) {
            std::cerr << "Tree is empty" << std::endl;
            return;
        }

        std::queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            Node* current = q.front();
            q.pop();

            std::cout << current->value << std::endl;

            if (current->left != nullptr) {
                q.push(current->left);
            }

            if (current->right != nullptr) {
                q.push(current->right);
            }
        }
}

void depthFirstSearch(Node* binaryTree) {
    if(binaryTree != nullptr) {
        std::cout << binaryTree->value << std::endl;

        if (binaryTree->left != nullptr) {
            depthFirstSearch(binaryTree->left);
        }
        if(binaryTree->right != nullptr) {
            depthFirstSearch(binaryTree->right);
        }
    }
}

int main() {
    Node* root = new Node(
        1,
        new Node(
            2,
            new Node(4),
            new Node(5) 
        ),
        new Node(3)
    );

    breadthFirstSearch(root);
    
    delete root;

    return 0;
}