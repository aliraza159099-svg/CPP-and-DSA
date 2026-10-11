#include <iostream>
#include "QueueLinked.h"
using namespace std;

int main() {
    QueueLinked q;
    q.print();                                      // front --> <-- rear

    q.enqueue(1); q.enqueue(2); q.enqueue(3);
    q.print();                                      // front --> 1 2 3 <-- rear

    cout << "Dequeued: " << q.dequeue() << endl;    // 1
    q.print();                                      // front --> 2 3 <-- rear

    cout << "Length: " << q.length() << endl;       // 2

    q.dequeue(); q.dequeue(); q.dequeue();          // drain completely
    q.print();                                      // empty
    q.enqueue(99);                                  // re-use after drain (tests the rear edge case!)
    q.print();                                      // front --> 99 <-- rear

    return 0;
}
