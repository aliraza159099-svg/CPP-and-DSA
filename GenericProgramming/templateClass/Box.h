#ifndef BOX_H
#define BOX_H

template <class T>
class Box
{
private:
    T value;

public:
    Box(T v);
    void display();
};

#endif