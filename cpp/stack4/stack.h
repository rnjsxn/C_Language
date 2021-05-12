#ifndef STACK_H
#define STACK_H
#include "array.h"

template <typename T>
class Stack{
private:
    static const int STACKSIZE;

    Array<T> arr_;
    int tos_;

Stack(const Stack<T>& rhs);
    Stack<T>& operator= (const Stack<T>& rhs);

public:
    explicit Stack(int size= STACKSIZE);  //Stack::

    void push(const T& data); //void push(T data);
    const T pop();

    bool isFull() const;
    bool isEmpty() const;
};
#include <cassert>
//#include "stack.h"
template <typename T>
const int Stack<T>::STACKSIZE= 100;

template <typename T>
Stack<T>::Stack(int size)
:arr_(size), tos_(0)
{

}

template <typename T>
void Stack<T>::push(const T& data)
{
    assert( !isFull());

    arr_[tos_]= data; //this->(omission)
    tos_++;
}

template <typename T>
const T Stack<T>::pop()
{
    assert( !isEmpty());

    tos_--;
    return arr_[tos_];
}

template <typename T>
bool Stack<T>::isFull() const
{
    return(tos_==arr_.size()); //this->
}

template <typename T>
bool Stack<T>::isEmpty() const
{
    return(tos_==0);
}
#endif
