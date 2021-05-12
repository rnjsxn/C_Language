#include <iostream>

int main()
{
    std::cout<<"hello, world"<< std::endl;

    //std::cout<<"hello, world";
    //std::cout.operator<<("hello,world"); //address
    operator<<(std::cout, "hello, world"); //charactor string

    //std::cout<<std::endl;
    std::cout.operator<<(std::endl); 
    //::operator<<(std::cout, std::endl);

    operator<<(std::cout,"hello, world").operator<<(std::endl); //(::)operator=>global variable 
    
    return 0;
}