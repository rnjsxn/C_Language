#include <cassert>
#include "stack.h"

const int Stack::STACKSIZE= 100;

Stack::Stack(int size)
:arr_(size), tos_(0)
{

}
 
/*
Stack::~Stack()
{

} */

void Stack::push(int data)
{
    assert( !isFull());

    arr_[tos_]= data; //this->(omission)
    tos_++;
}

int Stack::pop()
{
    assert( !isEmpty());

    tos_--;
    return arr_[tos_];
}

bool Stack::isFull() const
{
    return(tos_==arr_.size()); //this->
}

bool Stack::isEmpty() const
{
    return(tos_==0);
}

