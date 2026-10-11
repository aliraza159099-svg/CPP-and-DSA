#ifndef QUEUEARRAY_H
#define QUEUEARRAY_H


class QueueArray
{
    public:
        QueueArray(int size = 10);//constructor
        virtual ~QueueArray();//destructor
        bool empty() const;
        bool full() const;
        //these are true if queue is empty or full
        void enqueue(double x);//for adding element
        double dequeue();
        int length() const;
        void print() const;//for displaying elements


    private:
        int front;
        int rear;
        //front and rear index
        int counter;//for no. of elements
        int maxsize;//total capacity of queue
        double *values;
};

#endif // QUEUEARRAY_H
