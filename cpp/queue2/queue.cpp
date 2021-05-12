#include <cassert>
#include "queue.h"

const int Queue::QUEUESIZE= 100;

Queue::Queue(int size)
:pArr_(new int[size]), size_(size), front_(0), rear_(0)
{
    assert(pArr_);
}
 

Queue::~Queue()
{
    delete[] pArr_; //this-> 
}

void Queue::push(int data)
{
    assert( !isFull());

    pArr_[rear_]= data; //this->(omission)
    rear_++;
}

int Queue::pop()
{
    assert( !isEmpty());

    int tmp= front_;
    front_++;
    return pArr_[tmp];
}

bool Queue::isFull() const
{
    return(front_==rear_); //this->
}

bool Queue::isEmpty() const
{
    return (rear_== size_);
}

