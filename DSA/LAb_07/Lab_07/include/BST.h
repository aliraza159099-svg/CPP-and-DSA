#ifndef BST_H
#define BST_H

#include <cstddef>

template <typename T>
class BST {
    private:
        struct Node {
            T element;
            Node* left;
            Node* right;

            Node(const T& v, Node* lt = NULL, Node* rt = NULL) {
                element = v;
                left = lt;
                right = rt;
            }
        };

        Node* root;

        // Private recursive helper functions
        void insert(const T& x, Node*& t);
        void remove(const T& x, Node*& t);
        Node* findMin(Node* t) const;
        void makeEmpty(Node*& t);
        bool contains(const T& x, Node* t) const;

    public:
        BST();                          // Constructor
        ~BST();                         // Destructor

        bool empty() const;             // Check if tree is empty
        bool search(const T& x) const;  // Public search wrapper
        void insert(const T& x);        // Public insert wrapper
        void remove(const T& x);        // Public remove wrapper
};

#include "../src/BST.cpp"

#endif // BST_H
