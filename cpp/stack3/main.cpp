#include <iostream>
#include "stack.h"
int main()
{
    Stack s1;   //Stack s1(100);
    Stack s2(10); //Stack s2=10;
    //Stack s3(s2);

    //s1=s2;

    s1.push(100);
    s1.push(100);
    s1.push(100);

    while( !s1.isEmpty()){
    std::cout<<" s1 1st pop(): "<< s1.pop() << std::endl;
    }
    return 0;
}