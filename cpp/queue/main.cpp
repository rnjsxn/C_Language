//#include <sctdio>
#include <iostream>
#include "queue.h"


int main(void)
{
    Queue q1(100), q2(10);
//  q1.initQueue(&q1,100);
//  q2.initQueue(&q1,10);
    q1.push(100);
    q1.push(200);
    q1.push(300);
//  q1.rear=0;
//  q2.rear=0;    

//  printf("q1 1st pop(): %d\n", q1.pop());   
//  std::cout<<"q1 1st pop()";
//  std::cout<<q1.pop();
//  std::cout<<std::endl;
    std::cout << "q1 1st pop() : " << q1.pop() << std::endl; //c+out
    std::cout << "q1 1st pop() : " << q1.pop() << std::endl;
    std::cout << "q1 1st pop() : " << q1.pop() << std::endl;

    q2.push(900);
    q2.push(800);
    q2.push(700);

//  printf("q2 1st pop(): %d\n", q2.pop());
    std::cout << "q2 1st pop() : " << q2.pop() << std::endl;
    std::cout << "q2 1st pop() : " << q2.pop() << std::endl;
    std::cout << "q2 1st pop() : " << q2.pop() << std::endl;

    return 0;
}

