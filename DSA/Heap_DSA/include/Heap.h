#ifndef HEAP_H
#define HEAP_H
class Heap
{
    public:
        Heap();
        virtual ~Heap();
        bool empty() const;
        double root();

 /**    Heap& left();
        Heap& right();

        Heap& parent(double x);
*/

        void insert(const double x);
        void deleteMin();
        void perplate(int hole);
        double* sort();

    private:
        double* array;
        int array_size;
        int heap_size;
};

#endif // HEAP_H
