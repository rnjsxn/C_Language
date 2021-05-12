#ifndef STACK_H
#define STACK_H
#include "array.h"

class Stack{
private:
    static const int STACKSIZE;

    Array arr_;
    int tos_;

Stack(const Stack& rhs);
    Stack& operator= (const Stack& rhs);

public:
    //Stack();
    //~Stack();
    //Stack* operator&();
    //const Stack* operator&() const;

    //Stack();  //not generated
    explicit Stack(int size= STACKSIZE);
    //~Stack();  //is generated

    void push(int data);
    int pop();

    bool isFull() const;
    bool isEmpty() const;
};
#endif
