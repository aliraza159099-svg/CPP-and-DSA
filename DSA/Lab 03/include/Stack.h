#ifndef STACK_H
#define STACK_H


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
        int topIndex = -1;
        int size = 5;
        double arr[];
};

#endif // STACK_H
