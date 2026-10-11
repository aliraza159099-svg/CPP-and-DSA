
#ifndef STACK_H
#define STACK_H

// node for each element
struct Node {
    double data;
    Node* next;
};

typedef Node* Nodeptr;

class Stack
{
    public:
        Stack();
        Stack(const Stack& stack);
        virtual ~Stack();

        bool empty() const;
        void push(const double x);
        double pop();
        double top() const;
        void print() const;

    private:
        Nodeptr topNode;
};

#endif
