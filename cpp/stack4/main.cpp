#include <iostream>
#include "stack.h"
int main()
{
    Stack<int> s1; 
    Stack<int> s2(10); 

    s1.push(100);
    s1.push(100);
    s1.push(100);

    while( !s1.isEmpty()){
    std::cout<<" s1 1st pop(): "<< s1.pop() << std::endl;
    }
    return 0;
}