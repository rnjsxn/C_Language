#include <cassert>
#include "queue.h"

const int Queue::QUEUESIZE= 100;

Queue::Queue(int size)
:arr_(size), front_(0), rear_(0)
{

}
 
/*
Queue::~Queue()
{
     
} */

void Queue::push(int data)
{
    assert( !isFull());

    arr_[rear_]= data; //this->(omission)
    rear_++;
}

int Queue::pop()
{
    assert( !isEmpty());

    int tmp= front_;
    front_++;
    return arr_[tmp];
}

bool Queue::isFull() const
{
    return(front_==rear_); //this->
}

bool Queue::isEmpty() const
{
    return (rear_== arr_.size());
}

