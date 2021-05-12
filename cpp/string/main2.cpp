#include <iostream>
#include "string.h"

int main()
{
    String s1;
    String s2= "just the way you are"; //String s2("just the way you are");
    String s3= s2;  //Strings3(s2);

    s1=s2;  //s1.operator
    s1= "wonderful tonight";
    s1=s1;
    s2= " hands up!!";
    s2=s2;


    std::cout<<"s1.: "<< s1.c_str()<<"s1.len: "<<s1.length()<< std::endl;
    std::cout<<"s2.: "<< s2.c_str()<<"s2.len: "<<s2.length()<< std::endl;
    std::cout<<"s3.: "<< s3.c_str()<<"s3.len: "<<s3.length()<< std::endl;

    if(s1==s2)
        std::cout<< "s1 and s2 are equal"<<std::endl;
    else
        std::cout<< "s1 and s2 are not equal"<<std::endl;

    String s4;
    s4=s1+" "+ "Billy joel"+s2;
    std::cout<<"s4: "<<s4<<std::endl;


    return 0;
}